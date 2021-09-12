#ifndef NANDGATE_H
#define NANDGATE_H

#include "andgate.h"
#include "notgate.h"

/**
 * @brief   NAND Gate implementation
 */
class NandGate : public LogicGate {
private:
    bool *a, *b;  // input pointers
    AndGate and1; // internal basic logic gate
    NotGate not2; // internal basic logic gate

public:
    /**
     * @brief   Construct a new NandGate object with passed inputs
     * 
     * @param   a,b Input references
     */
    NandGate(bool &a, bool &b);

    /**
     * @brief   Construct a new NandGate object with passed inputs
     * 
     * @param   ins Inputs vector
     */
    NandGate(const std::vector<bool *> &ins);

    /**
     * @brief   Override that computes the output of the NAND Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   Override that changes the input lines for the NAND Gate
     * 
     * @param   newInputs New inputs vector
     */
    void changeInputs(const std::vector<bool *> &newInputs) override;
};

#endif /* NANDGATE_H */