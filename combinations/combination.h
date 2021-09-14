#ifndef COMBINATION_H
#define COMBINATION_H

#include "../include/logicgates.h"

#include <memory>
#include <set>
#include <unordered_set>
#include <vector>

/**
 * @brief   Generic base class that can represent any combination of LogicGates
 */
class Combination {
private:
    // internal set of input pointers, used to check if input already exists in
    // the vector inputs, in constant time
    std::unordered_set<bool *> inputSet;

public:
    /// Input pointers, does not contain duplicates and maintains order of insertion
    std::vector<bool *> inputs;

    /// Internal gates of the Combination
    std::vector<std::unique_ptr<LogicGate>> gates;

    /// Outputs of the Combination
    std::vector<bool *> outputs;

    /**
     * @brief   Overridden to compute the output of the specific class derived
     *          from Combination from the input pointers
     */
    void compute();

    /**
     * @brief   Constructs a LogicGate object with passed inputs and adds it to the
     *          Combination. Templates manually instantiated with each LogicGate class.
     * 
     * @tparam  T Specific LogicGate implementation to be constructed
     * @param   ins Inputs for the LogicGate
     * @param   addToIn Whether to add passed inputs to vector inputs
     * @param   addToOut Whether to add output of the LogicGate to vector outputs
     */
    template <class T>
    void addGate(std::vector<bool *> ins, bool addToIn = true, bool addToOut = false);

    /**
     * @brief   Moves the passed LogicGate smart pointer into the combination
     * 
     * @param   gate Unique pointer to a LogicGate implementation
     * @param   addToOut Whether to add output of gate to vector outputs
     */
    void addGate(std::unique_ptr<LogicGate> gate, bool addToOut = false);

    /**
     * @brief   Appends input to vector inputs if not already present in it
     * 
     * @param   input An input to the combination
     */
    void insertInput(bool *input);
};

#endif /* COMBINATION_H */