#include "truthtable.h"

void gater::truthTable(LogicGate &device, const std::string &title,
					   const std::vector<bool *> &inputs) {
	std::cout << "\n"
	          << title << " Truth Table:\n ";

	// Label the columns. This supports up to 26 inputs, which is fine
	// because 2^26 is already too many rows
	for (int i = 0; i < inputs.size(); ++i) {
		std::cout << " " << char('a' + i) << " |";
	}

	std::cout << " out\n";
	std::cout << "----+---+-----\n";

	// backup of the original values of inputs
	std::vector<bool> originalValues(inputs.size());
	for (int i = 0; i < inputs.size(); ++i) {
		originalValues[i] = *inputs[i];
	}

	// we iterate bitwise over 2^n permutations and combinations
	// this will support atleast 32, which is >26.
	for (int i = 0; i < (1 << inputs.size()); ++i) {
		for (int j = 0; j < inputs.size(); ++j) {
			*inputs[j] = i & (1 << j);
		}
		device.compute();

		std::cout << " ";
		for (int i = 0; i < inputs.size(); ++i) {
			std::cout << " " << *inputs[i] << " |";
		}

		std::cout << "  " << device.out << "\n";
	}
	std::cout << "\n";

	// restore original values
	for (int i = 0; i < inputs.size(); ++i) {
		*inputs[i] = originalValues[i];
	}

	// restore original device output
	device.compute();
}