#include "include/logicgates.h"
#include "include/utilities.h"

#include <iostream>
#include <memory>
#include <vector>

int main() {
	bool a, b;
	std::vector<std::unique_ptr<BinaryDevice>> testArray;
	testArray.push_back(std::make_unique<NandGate>(a, b));

	gater::truthTable(*testArray[0], "NAND Gate", {&a, &b});

	return 0;
}