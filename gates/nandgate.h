#ifndef NANDGATE_H
#define NANDGATE_H

#include "andgate.h"
#include "notgate.h"

/**
 * @brief	NAND Gate implementation
 */
class NandGate : public LogicGate {
private:
	bool *a, *b;  // input pointers
	AndGate and1; // internal basic logic gate
	NotGate not2; // internal basic logic gate

public:
	NandGate(bool &a, bool &b);

	/**
	 * @brief	override that computes the output of the NAND Gate
	 * 			from the input pointers
	 */
	void compute() override;
};

#endif /* NANDGATE_H */