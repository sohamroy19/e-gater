#ifndef NANDGATE_H
#define NANDGATE_H

#include "notgate.h"
#include "andgate.h"

class NandGate {
private:
	bool *a, *b;
	AndGate and1;
	NotGate not2;

public:
	bool out;

	NandGate(bool &a, bool &b);
	void compute();
};

#endif