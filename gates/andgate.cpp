#include "andgate.h"

AndGate::AndGate(bool &a, bool &b)
	: a(&a), b(&b) {}

void AndGate::compute() {
	out = *a & *b;
}