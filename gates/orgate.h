#ifndef ORGATE_H
#define ORGATE_H

#include "binarydevice.h"

class OrGate : public BinaryDevice {
private:
	bool *a, *b;

public:
	OrGate(bool &a, bool &b);
	void compute() override;
};

#endif