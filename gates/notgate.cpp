#include "notgate.h"

NotGate::NotGate(bool &a)
    : a(&a) {}

void NotGate::compute() {
    out = !*a;
}