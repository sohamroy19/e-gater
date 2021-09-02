#include "xorgate.h"

XorGate::XorGate(bool &a, bool &b)
    : a(&a), b(&b),
      nand1a(*this->a, *this->b),
      or1b(*this->a, *this->b),
      and2(nand1a.out, or1b.out) {}

void XorGate::compute() {
    nand1a.compute();
    or1b.compute();
    and2.compute();

    out = and2.out;
}