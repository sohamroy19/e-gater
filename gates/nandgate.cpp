#include "nandgate.h"
#include <iostream>

NandGate::NandGate(bool &a, bool &b)
	: a(&a), b(&b)
	, and1(*this->a, *this->b)
	, not2(and1.out) {}

void NandGate::compute() {
	and1.compute();
	not2.compute();
	out = not2.out;
}