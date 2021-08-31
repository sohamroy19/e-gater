#ifndef ORGATE_H
#define ORGATE_H

#include "logicgate.h"

/**
 * @brief	OR Gate implementation
 */
class OrGate : public LogicGate {
private:
	bool *a, *b;

public:
	OrGate(bool &a, bool &b);
	void compute() override;
};

#endif /* ORGATE_H */