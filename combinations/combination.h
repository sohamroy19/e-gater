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
    std::unordered_set<bool *> inputSet;

public:
    /// input pointers
    std::vector<bool *> inputs;

    /// internal gates of the Combination
    std::vector<std::unique_ptr<LogicGate>> gates;

    /// outputs of the Combination
    std::vector<bool *> outputs;

    /**
     * @brief   overridden to compute the output of the specific class derived
     *          from Combination from the input pointers
     */
    void compute();

    template <class T>
    void addGate(std::vector<bool *> ins, bool addToIn = true, bool addToOut = false);

    void insertInput(bool *input);
};

#endif /* COMBINATION_H */