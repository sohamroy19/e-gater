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

void Combination::insertInput(bool *input) {
    if (inputSet.find(input) == inputSet.end()) {
        inputSet.insert(input);
        inputs.push_back(input);
    }
}

// generate template function implementations for all logic gates
template void Combination::addGate<AndGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<OrGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<NotGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<NandGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<NorGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<XorGate>(std::vector<bool *>, bool, bool);
template void Combination::addGate<XnorGate>(std::vector<bool *>, bool, bool);