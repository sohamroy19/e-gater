#ifndef NORGATE_H
#define NORGATE_H

#include "notgate.h"
#include "orgate.h"

/**
 * @brief   NOR Gate implementation
 */
class NorGate : public LogicGate {
private:
    bool *a, *b;  // input pointer
    OrGate or1;   // internal basic logic gate
    NotGate not2; // internal basic logic gate

public:
    NorGate(bool &a, bool &b);

    NorGate(std::vector<bool *> &ins);

    /**
     * @brief   override that computes the output of the NOR Gate
     *          from the input pointers
     */
    void compute() override;

    /**
     * @brief   override that changes the input lines for the NOR Gate
     */
    void changeInputs(std::vector<bool *> newInputs) override;
};

#endif /* NORGATE_H */