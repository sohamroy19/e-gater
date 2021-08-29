#ifndef NANDGATE_H
#define NANDGATE_H

#include "notgate.h"
#include "andgate.h"

class NandGate : public BinaryDevice {
private:
	bool *a, *b;
	AndGate and1;
	NotGate not2;

public:
	NandGate(bool &a, bool &b);
	void compute() override;
};

#endif