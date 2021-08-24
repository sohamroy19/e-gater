#include "orgate.h"

OrGate::OrGate(bool &a, bool &b)
	: a(&a), b(&b) {}

void OrGate::compute() {
	out = *a | *b;
}