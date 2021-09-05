#include "combination.h"

void Combination::compute() {
    for (int i = 0; i < gates.size(); ++i) {
        gates[i]->compute();
    }
}

template <class T>
void addGate(std::vector<bool *> ins, bool addToOuts) {
    gates.push_back(std::make_unique<T>(ins));

    for (auto &in : ins) {
        inputs.insert(in);
    }

    if (addToOuts) {
        outs.push_back(&gates.back().out);
    }
}