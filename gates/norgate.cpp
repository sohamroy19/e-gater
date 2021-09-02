#include "norgate.h"

NorGate::NorGate(bool &a, bool &b)
    : a(&a), b(&b),
      or1(*this->a, *this->b),
      not2(or1.out) {}

void NorGate::compute() {
    or1.compute();
    not2.compute();

    out = not2.out;
}