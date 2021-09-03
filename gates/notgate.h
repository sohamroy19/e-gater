#ifndef NOTGATE_H
#define NOTGATE_H

#include "logicgate.h"

/**
 * @brief   NOT Gate implementation
 */
class NotGate : public LogicGate {
private:
    bool *a; // input pointer

public:
    NotGate(bool &a);

    /**
     * @brief   override that computes the output of the NOT Gate
     *          from the input pointer
     */
    void compute() override;

    /**
     * @brief   override that changes the input lines for the NOT Gate
     */
    void changeInputs(std::vector<bool *> newInputs) override;
};

#endif /* NOTGATE_H */