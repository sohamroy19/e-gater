#include "xnorgate.h"

XnorGate::XnorGate(bool &a, bool &b)
    : a(&a), b(&b),
      and1a(*this->a, *this->b),
      nor1b(*this->a, *this->b),
      or2(and1a.out, nor1b.out) {}

XnorGate::XnorGate(std::vector<bool *> &ins)
    : a(ins[0]), b(ins[1]),
      and1a(*this->a, *this->b),
      nor1b(*this->a, *this->b),
      or2(and1a.out, nor1b.out) {}

void XnorGate::compute() {
    and1a.compute();
    nor1b.compute();
    or2.compute();

    out = or2.out;
}

void XnorGate::changeInputs(std::vector<bool *> newInputs) {
    a = newInputs[0];
    b = newInputs[1];
}