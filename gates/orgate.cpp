#include "orgate.h"

OrGate::OrGate(bool &a, bool &b)
    : a(&a), b(&b) {}

OrGate::OrGate(const std::vector<bool *> &ins)
    : a(ins[0]), b(ins[1]) {}

void OrGate::compute() {
    out = *a | *b;
}

void OrGate::changeInputs(const std::vector<bool *> &newInputs) {
    a = newInputs[0];
    b = newInputs[1];
}