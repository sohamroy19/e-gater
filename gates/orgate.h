#ifndef ORGATE_H
#define ORGATE_H

#include "logicgate.h"

/**
 * @brief	OR Gate implementation
 */
class OrGate : public LogicGate {
private:
    bool *a, *b; // input pointer

public:
    OrGate(bool &a, bool &b);

    /**
	 * @brief	override that computes the output of the OR Gate
	 * 			from the input pointers
	 */
    void compute() override;
};

#endif /* ORGATE_H */