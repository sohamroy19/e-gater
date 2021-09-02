#ifndef NORGATE_H
#define NORGATE_H

#include "notgate.h"
#include "orgate.h"

/**
 * @brief	NOR Gate implementation
 */
class NorGate : public LogicGate {
private:
    bool *a, *b;  // input pointer
    OrGate or1;   // internal basic logic gate
    NotGate not2; // internal basic logic gate

public:
    NorGate(bool &a, bool &b);

    /**
	 * @brief	override that computes the output of the NOR Gate
	 * 			from the input pointers
	 */
    void compute() override;
};

#endif /* NORGATE_H */