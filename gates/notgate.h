#ifndef NOTGATE_H
#define NOTGATE_H

#include "logicgate.h"

/**
 * @brief	NOT Gate implementation
 */
class NotGate : public LogicGate {
private:
    bool *a; // input pointer

public:
    NotGate(bool &a);

    /**
	 * @brief	override that computes the output of the NOT Gate
	 * 			from the input pointer
	 */
    void compute() override;
};

#endif /* NOTGATE_H */