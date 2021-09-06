#include "combination.h"

void Combination::compute() {
    for (int i = 0; i < gates.size(); ++i) {
        gates[i]->compute();
    }
}

template <class T>
void Combination::addGate(std::vector<bool *> ins, bool addToOuts) {
    gates.push_back(std::make_unique<T>(ins));

    for (auto &in : ins) {
        inputs.insert(in);
    }

    if (addToOuts) {
        outs.push_back(&gates.back()->out);
    }
}

// generate template function implementations for all logic gates
template void Combination::addGate<AndGate>(std::vector<bool *>, bool);
template void Combination::addGate<OrGate>(std::vector<bool *>, bool);
template void Combination::addGate<NotGate>(std::vector<bool *>, bool);
template void Combination::addGate<NandGate>(std::vector<bool *>, bool);
template void Combination::addGate<NorGate>(std::vector<bool *>, bool);
template void Combination::addGate<XorGate>(std::vector<bool *>, bool);
template void Combination::addGate<XnorGate>(std::vector<bool *>, bool);