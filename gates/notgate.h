#ifndef NOTGATE_H
#define NOTGATE_H

#include "logicgate.h"

/**
 * @brief	NOT Gate implementation
 */
class NotGate : public LogicGate {
private:
	bool *a;

public:
	NotGate(bool &a);
	void compute() override;
};

#endif /* NOTGATE_H */