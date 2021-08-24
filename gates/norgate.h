#ifndef NORGATE_H
#define NORGATE_H

#include "notgate.h"
#include "orgate.h"

class NorGate {
private:
	bool *a, *b;
	OrGate or1;
	NotGate not2;

public:
	bool out;

	NorGate(bool &a, bool &b);
	void compute();
};

#endif