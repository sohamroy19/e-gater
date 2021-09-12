#include "xorgate.h"

XorGate::XorGate(bool &a, bool &b)
    : a(&a), b(&b),
      nand1a(*this->a, *this->b),
      or1b(*this->a, *this->b),
      and2(nand1a.out, or1b.out) {}

XorGate::XorGate(const std::vector<bool *> &ins)
    : a(ins[0]), b(ins[1]),
      nand1a(*this->a, *this->b),
      or1b(*this->a, *this->b),
      and2(nand1a.out, or1b.out) {}

void XorGate::compute() {
    nand1a.compute();
    or1b.compute();
    and2.compute();

    out = and2.out;
}

void XorGate::changeInputs(const std::vector<bool *> &newInputs) {
    a = newInputs[0];
    b = newInputs[1];
}