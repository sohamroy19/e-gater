#ifndef NORGATE_H
#define NORGATE_H

#include "notgate.h"
#include "orgate.h"

/**
 * @brief   NOR Gate implementation
 */
class NorGate : public LogicGate {
private:
    bool *a, *b;  // input pointers
    OrGate or1;   // internal basic logic gate
    NotGate not2; // internal basic logic gate

public:
    /**
     * @brief   Construct a new NorGate object with passed inputs
     * 
     * @param   a,b Input references
     */
    NorGate(bool &a, bool &b);

    /**
     * @brief   Construct a new NorGate object with passed inputs
     * 
     * @param   ins Inputs vector
     */
    NorGate(const std::vector<bool *> &ins);

    /**
     * @brief   Override that computes the output of the NOR Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   Override that changes the input lines for the NOR Gate
     * 
     * @param   newInputs New inputs vector
     */
    void changeInputs(const std::vector<bool *> &newInputs) override;
};

#endif /* NORGATE_H */