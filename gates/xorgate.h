#ifndef XORGATE_H
#define XORGATE_H

#include "andgate.h"
#include "nandgate.h"
#include "orgate.h"

/**
 * @brief   XOR Gate implementation
 */
class XorGate : public LogicGate {
private:
    bool *a, *b;     // input pointer
    NandGate nand1a; // internal basic logic gate
    OrGate or1b;     // internal basic logic gate
    AndGate and2;    // internal basic logic gate

public:
    /**
     * @brief   Construct a new XorGate object with passed inputs
     * 
     * @param   a,b Input references
     */
    XorGate(bool &a, bool &b);

    /**
     * @brief   Construct a new XorGate object with passed inputs
     * 
     * @param   ins Input vector
     */
    XorGate(const std::vector<bool *> &ins);

    /**
     * @brief   Override that computes the output of the XOR Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   Override that changes the input lines for the XOR Gate
     * 
     * @param   newInputs New inputs vector
     */
    void changeInputs(const std::vector<bool *> &newInputs) override;
};

#endif /* XORGATE_H */