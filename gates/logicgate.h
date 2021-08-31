#ifndef LOGICGATE_H
#define LOGICGATE_H

/**
 * @brief	Generic base class that can represent any logic gate
 */
class LogicGate {
public:
	bool out;

	virtual void compute(){};
};

#endif /* LOGICGATE_H */ 