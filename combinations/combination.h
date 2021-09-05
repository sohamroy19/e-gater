#ifndef COMBINATION_H
#define COMBINATION_H

#include "../include/logicgates.h"

#include <memory>
#include <set>
#include <vector>

/**
 * @brief   Generic base class that can represent any logic gate
 */
class Combination {
public:
    /// input pointers
    std::set<bool *> inputs;

    /// internal gates of the Combination
    std::vector<std::unique_ptr<LogicGate>> gates;

    /// outputs of the Combination
    std::vector<bool *> outs;

    /**
     * @brief   overridden to compute the output of the specific class derived
     *          from Combination from the input pointers
     */
    void compute();

    template <class T>
    void addGate(std::vector<bool *> ins, bool addToOuts = false);
};

#endif /* COMBINATION_H */