#ifndef LOGICGATE_H
#define LOGICGATE_H

#include <vector>

/**
 * @brief   Generic base class that can represent any logic gate
 */
class LogicGate {
public:
    /// output of the LogicGate
    bool out;

    /**
     * @brief   overridden to compute the output of the specific class derived
     *          from LogicGate from the input pointers
     */
    virtual void compute(){};

    /**
     * @brief   overridden to change the input line(s) for the LogicGate
     */
    virtual void changeInputs(std::vector<bool *>){};
};

#endif /* LOGICGATE_H */