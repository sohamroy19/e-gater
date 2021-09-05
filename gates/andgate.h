#ifndef ANDGATE_H
#define ANDGATE_H

#include "logicgate.h"

/**
 * @brief   AND Gate implementation
 */
class AndGate : public LogicGate {
private:
    bool *a, *b; // input pointer

public:
    AndGate(bool &a, bool &b);
    
    AndGate(std::vector<bool *> &ins);

    /**
     * @brief   override that computes the output of the AND Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   override that changes the input lines for the AND Gate
     */
    void changeInputs(std::vector<bool *> newInputs) override;
};

#endif /* ANDGATE_H */