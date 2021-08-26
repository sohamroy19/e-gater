#include "include/logicgates.h"

#include <iostream>

int main() {
	bool a, b;
	NandGate one(a, b);

	std::cout << "NAND gate Truth Table:\n";
	std::cout << "  a | b | out\n";
	std::cout << "----+---+-----\n";

	for (int i = 0; i < 4; ++i) {
		a = (i / 2) % 2;
		b = i % 2;
		std::cout << "  " << a << " | " << b << " |  ";
		one.compute();
		std::cout << one.out << "\n";
	}

	return 0;
}