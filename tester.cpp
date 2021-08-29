#include "include/logicgates.h"

#include <iostream>
#include <memory>
#include <vector>

int main() {
	bool a, b;
	std::vector<std::unique_ptr<BinaryDevice>> testArray;
	testArray.push_back(std::make_unique<NandGate>(a, b));

	std::cout << "NAND gate Truth Table:\n";
	std::cout << "  a | b | out\n";
	std::cout << "----+---+-----\n";

	for (int i = 0; i < 4; ++i) {
		a = (i / 2) % 2;
		b = i % 2;
		std::cout << "  " << a << " | " << b << " |  ";
		testArray[0]->compute();
		std::cout << testArray[0]->out << "\n";
	}

	return 0;
}