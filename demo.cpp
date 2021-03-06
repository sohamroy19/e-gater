#include "include/combinations.h"
#include "include/utilities.h"

#include <iostream>
#include <memory>
#include <vector>

int main() {
    // inputs for our gates
    bool a, b, c, d;

    // any gate can be stored in a vector of LogicGate smart pointer
    std::vector<std::unique_ptr<LogicGate>> testArray;

    // memory-safe way to push to a vector of unique_ptr to Objects
    // note how a, b, c, d need not be initialised yet
    testArray.push_back(std::make_unique<NandGate>(a, b));
    testArray.push_back(std::make_unique<XnorGate>(c, d));

    gater::truthTable(*testArray[0], "NAND Gate", {&a, &b});
    gater::truthTable(*testArray[1], "XNOR Gate", {&c, &d});

    // another way would be to use a Combination
    Combination circuit;
    circuit.addGate<XorGate>({&a, &b});
    circuit.addGate<XorGate>({&c, &circuit.gates[0]->out}, false, true);
    circuit.insertInput(&c);

    gater::truthTable(circuit, "Combination (a^b^c)");

    return 0;
}