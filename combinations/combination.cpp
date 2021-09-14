#include "combination.h"

void Combination::compute() {
    for (auto &gate : gates) {
        gate->compute();
    }
}

template <class T>
void Combination::addGate(std::vector<bool *> ins, bool addToIn, bool addToOut) {
    gates.push_back(std::make_unique<T>(ins));

    if (addToIn) {
        for (auto &in : ins) {
            insertInput(in);
        }
    }

    if (addToOut) {
        outputs.push_back(&gates.back()->out);
    }
}

void Combination::addGate(std::unique_ptr<LogicGate> gate, bool addToOut) {
    gates.push_back(std::move(gate));

    if (addToOut) {
        outputs.push_back(&gates.back()->out);
    }
}

void Combination::insertInput(bool *input) {
    // search in inputSet in O(1) time to prevent duplication in vector inputs
    if (inputSet.find(input) == inputSet.end()) {
        inputSet.insert(input);
        inputs.push_back(input);
    }
}

// generate template function implementations for all logic gates
/// @cond exclude template instantiations from Doxygen
template void Combination::addGate<AndGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<OrGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<NotGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<NandGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<NorGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<XorGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<XnorGate>(std::vector<bool *>, bool, bool);
/// @endcond