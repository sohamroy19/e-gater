#ifndef ANDGATE_H
#define ANDGATE_H

class AndGate {
private:
	bool *a, *b;

public:
	bool out;

	AndGate(bool &a, bool &b);
	void compute();
};

#endif