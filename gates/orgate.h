#ifndef ORGATE_H
#define ORGATE_H

#include "logicgate.h"

/**
 * @brief   OR Gate implementation
 */
class OrGate : public LogicGate {
private:
    bool *a, *b; // input pointers

public:
    /**
     * @brief   Construct a new Or Gate object with passed inputs
     * 
     * @param   a,b Input references
     */
    OrGate(bool &a, bool &b);
    
    /**
     * @brief   Construct a new Or Gate object with passed inputs
     * 
     * @param   ins Inputs vector
     */
    OrGate(const std::vector<bool *> &ins);

    /**
     * @brief   Override that computes the output of the OR Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   Override that changes the input lines for the OR Gate
     * 
     * @param   newInputs New inputs vector
     */
    void changeInputs(const std::vector<bool *> &newInputs) override;
};

#endif /* ORGATE_H */