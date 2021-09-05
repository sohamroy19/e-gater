#include "norgate.h"

NorGate::NorGate(bool &a, bool &b)
    : a(&a), b(&b),
      or1(*this->a, *this->b),
      not2(or1.out) {}

NorGate::NorGate(std::vector<bool *> &ins)
    : a(ins[0]), b(ins[1]),
      or1(*this->a, *this->b),
      not2(or1.out) {}

void NorGate::compute() {
    or1.compute();
    not2.compute();

    out = not2.out;
}

void NorGate::changeInputs(std::vector<bool *> newInputs) {
    a = newInputs[0];
    b = newInputs[1];
}