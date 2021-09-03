#include "orgate.h"

OrGate::OrGate(bool &a, bool &b)
    : a(&a), b(&b) {}

void OrGate::compute() {
    out = *a | *b;
}

void OrGate::changeInputs(std::vector<bool *> newInputs) {
    a = newInputs[0];
    b = newInputs[1];
}