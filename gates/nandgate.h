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
    NandGate(bool &a, bool &b);
    
    NandGate(std::vector<bool *> &ins);

    /**
     * @brief   override that computes the output of the NAND Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   override that changes the input lines for the NAND Gate
     */
    void changeInputs(std::vector<bool *> newInputs) override;
};

#endif /* NANDGATE_H */