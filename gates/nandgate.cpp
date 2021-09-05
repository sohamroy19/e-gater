#include "nandgate.h"

NandGate::NandGate(bool &a, bool &b)
    : a(&a), b(&b),
      and1(*this->a, *this->b),
      not2(and1.out) {}

NandGate::NandGate(std::vector<bool *> &ins)
    : a(ins[0]), b(ins[1]),
      and1(*this->a, *this->b),
      not2(and1.out) {}

void NandGate::compute() {
    and1.compute();
    not2.compute();

    out = not2.out;
}

void NandGate::changeInputs(std::vector<bool *> newInputs) {
    a = newInputs[0];
    b = newInputs[1];
}