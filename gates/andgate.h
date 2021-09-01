#ifndef ANDGATE_H
#define ANDGATE_H

#include "logicgate.h"

/**
 * @brief	AND Gate implementation
 */
class AndGate : public LogicGate {
private:
	bool *a, *b; // input pointer

public:
	AndGate(bool &a, bool &b);

	/**
	 * @brief	override that computes the output of the AND Gate
	 * 			from the input pointers
	 */
	void compute() override;
};

#endif /* ANDGATE_H */