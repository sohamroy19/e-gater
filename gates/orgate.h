#ifndef ORGATE_H
#define ORGATE_H

class OrGate {
private:
	bool *a, *b;

public:
	bool out;

	OrGate(bool &a, bool &b);
	void compute();
};

#endif