#ifndef NANDGATE_H
#define NANDGATE_H

#include "andgate.h"
#include "notgate.h"

/**
 * @brief	NAND Gate implementation
 */
class NandGate : public LogicGate {
private:
	bool *a, *b;
	AndGate and1;
	NotGate not2;

public:
	NandGate(bool &a, bool &b);
	void compute() override;
};

#endif /* NANDGATE_H */