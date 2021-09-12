#ifndef ANDGATE_H
#define ANDGATE_H

#include "logicgate.h"

/**
 * @brief AND Gate implementation
 */
class AndGate : public LogicGate {
private:
    bool *a, *b; // input pointers

public:
    /**
     * @brief   Construct a new AndGate object with passed inputs
     * 
     * @param   a,b Input references
     */
    AndGate(bool &a, bool &b);

    /**
     * @brief   Construct a new AndGate object with passed inputs
     * 
     * @param   ins Inputs vector
     */
    AndGate(const std::vector<bool *> &ins);

    /**
     * @brief   Override that computes the output of the AND Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   Override that changes the input lines for the AND Gate
     * 
     * @param   newInputs New inputs vector
     */
    void changeInputs(const std::vector<bool *> &newInputs) override;
};

#endif /* ANDGATE_H */