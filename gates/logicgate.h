#ifndef LOGICGATE_H
#define LOGICGATE_H

#include <vector>

/**
 * @brief   Generic base class that can represent any logic gate
 */
class LogicGate {
public:
    /// Output of the LogicGate
    bool out;

    /**
     * @brief   Overridden to compute the output of the specific class derived
     *          from LogicGate from the input pointers
     */
    virtual void compute(){};

    /**
     * @brief   Overridden to change the input line(s) for the LogicGate
     * 
     * @param   newInputs New inputs vector
     */
    virtual void changeInputs(const std::vector<bool *> &newInputs){};
};

#endif /* LOGICGATE_H */