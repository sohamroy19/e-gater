#include "notgate.h"

NotGate::NotGate(bool &a)
    : a(&a) {}

NotGate::NotGate(const std::vector<bool *> &ins)
    : a(ins[0]) {}

void NotGate::compute() {
    out = !*a;
}

void NotGate::changeInputs(const std::vector<bool *> &newInputs) {
    a = newInputs[0];
}