#ifndef ANDGATE_H
#define ANDGATE_H

#include "logicgate.h"

/**
 * @brief	AND Gate implementation
 */
class AndGate : public LogicGate {
private:
	bool *a, *b;

public:
	AndGate(bool &a, bool &b);
	void compute() override;
};

#endif /* ANDGATE_H */