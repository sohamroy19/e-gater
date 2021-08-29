#ifndef NOTGATE_H
#define NOTGATE_H

#include "binarydevice.h"

class NotGate : public BinaryDevice {
private:
	bool *a;

public:
	NotGate(bool &a);
	void compute() override;
};

#endif