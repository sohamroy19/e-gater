#ifndef NOTGATE_H
#define NOTGATE_H

class NotGate {
private:
	bool *a;

public:
	bool out;

	NotGate(bool &a);
	void compute();
};

#endif