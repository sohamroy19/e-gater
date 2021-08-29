#ifndef ANDGATE_H
#define ANDGATE_H

#include "binarydevice.h"

class AndGate : public BinaryDevice {
private:
	bool *a, *b;

public:
	AndGate(bool &a, bool &b);
	void compute() override;
};

#endif