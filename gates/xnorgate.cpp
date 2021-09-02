#include "xnorgate.h"

XnorGate::XnorGate(bool &a, bool &b)
    : a(&a), b(&b),
      and1a(*this->a, *this->b),
      nor1b(*this->a, *this->b),
      or2(and1a.out, nor1b.out) {}

void XnorGate::compute() {
    and1a.compute();
    nor1b.compute();
    or2.compute();

    out = or2.out;
}