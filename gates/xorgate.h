#ifndef XORGATE_H
#define XORGATE_H

#include "andgate.h"
#include "nandgate.h"
#include "orgate.h"

/**
 * @brief	XOR Gate implementation
 */
class XorGate : public LogicGate {
private:
    bool *a, *b;     // input pointer
    NandGate nand1a; // internal basic logic gate
    OrGate or1b;     // internal basic logic gate
    AndGate and2;    // internal basic logic gate

public:
    XorGate(bool &a, bool &b);

    /**
	 * @brief	override that computes the output of the XOR Gate
	 * 			from the input pointers
	 */
    void compute() override;
};

#endif /* XORGATE_H */