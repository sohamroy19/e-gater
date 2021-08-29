#ifndef NORGATE_H
#define NORGATE_H

#include "notgate.h"
#include "orgate.h"

class NorGate : public BinaryDevice {
private:
	bool *a, *b;
	OrGate or1;
	NotGate not2;

public:
	NorGate(bool &a, bool &b);
	void compute() override;
};

#endif