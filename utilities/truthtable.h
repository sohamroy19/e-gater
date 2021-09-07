#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "../combinations/combination.h"
#include "../gates/logicgate.h"

#include <iostream>
#include <vector>

namespace gater {
    /**
     * @brief   Displays the truth table for any LogicGate in the console.
     *          Supports at most 26 inputs, which will display 2^26 rows.
     * 
     * @param   device the LogicGate to display the truth table of
     * @param   title the title of device for displaying truth table
     * @param   inputs vector of pointers to inputs of device, 
     *          restored to original values at the end of the function
     */
    void truthTable(LogicGate &device, const std::string &title,
                    const std::vector<bool *> &inputs);

    /**
     * @brief   Displays the truth table for any Combination in the console.
     *          Supports at most 26 inputs, which will display 2^26 rows.
     * 
     * @param   combo the Combination to display the truth table of
     * @param   title the title of device for displaying truth table
     * @param   out the output of the combination considered for display
     */
    void truthTable(Combination &combo, const std::string &title, const bool &out);
}

#endif /* TRUTHTABLE_H */