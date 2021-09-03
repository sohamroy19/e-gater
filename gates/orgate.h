#ifndef ORGATE_H
#define ORGATE_H

#include "logicgate.h"

/**
 * @brief   OR Gate implementation
 */
class OrGate : public LogicGate {
private:
    bool *a, *b; // input pointer

public:
    OrGate(bool &a, bool &b);

    /**
     * @brief   override that computes the output of the OR Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   override that changes the input lines for the OR Gate
     */
    void changeInputs(std::vector<bool *> newInputs) override;
};

#endif /* ORGATE_H */