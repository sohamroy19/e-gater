#ifndef XNORGATE_H
#define XNORGATE_H

#include "andgate.h"
#include "norgate.h"
#include "orgate.h"

/**
 * @brief   XNOR Gate implementation
 */
class XnorGate : public LogicGate {
private:
    bool *a, *b;   // input pointer
    AndGate and1a; // internal basic logic gate
    NorGate nor1b; // internal basic logic gate
    OrGate or2;    // internal basic logic gate

public:
    /**
     * @brief   Construct a new XnorGate object with passed inputs
     * 
     * @param   a,b Input references
     */
    XnorGate(bool &a, bool &b);

    /**
     * @brief   Construct a new XnorGate object with passed inputs
     * 
     * @param   ins Inputs vector
     */
    XnorGate(const std::vector<bool *> &ins);

    /**
     * @brief   Override that computes the output of the XNOR Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   Override that changes the input lines for the XNOR Gate
     * 
     * @param   newInputs New inputs vector
     */
    void changeInputs(const std::vector<bool *> &newInputs) override;
};

#endif /* XNORGATE_H */