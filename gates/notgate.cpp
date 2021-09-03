#include "notgate.h"

NotGate::NotGate(bool &a)
    : a(&a) {}

void NotGate::compute() {
    out = !*a;
}

void NotGate::changeInputs(std::vector<bool *> newInputs) {
    a = newInputs[0];
}