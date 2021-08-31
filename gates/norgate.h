#ifndef NORGATE_H
#define NORGATE_H

#include "notgate.h"
#include "orgate.h"

/**
 * @brief	NOR Gate implementation
 */
class NorGate : public LogicGate {
private:
	bool *a, *b;
	OrGate or1;
	NotGate not2;

public:
	NorGate(bool &a, bool &b);
	void compute() override;
};

#endif /* NORGATE_H */