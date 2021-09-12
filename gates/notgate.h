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
    /**
     * @brief   Construct a new Not Gate object with passed input
     * 
     * @param   a Input reference
     */
    NotGate(bool &a);

    /**
     * @brief   Construct a new NotGate object with passed input
     * 
     * @param   ins Input vector
     */
    NotGate(const std::vector<bool *> &ins);

    /**
     * @brief   Override that computes the output of the NOT Gate
     *          from the input pointer
     */
    void compute() override;

    /**
     * @brief   Override that changes the input lines for the NOT Gate
     * 
     * @param   newInputs New inputs vector
     */
    void changeInputs(const std::vector<bool *> &newInputs) override;
};

#endif /* NOTGATE_H */