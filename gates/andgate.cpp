#include "andgate.h"

AndGate::AndGate(bool &a, bool &b)
    : a(&a), b(&b) {}

void AndGate::compute() {
    out = *a & *b;
}

void AndGate::changeInputs(std::vector<bool *> newInputs) {
    a = newInputs[0];
    b = newInputs[1];
}