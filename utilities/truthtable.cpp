#include "truthtable.h"

void gater::truthTable(BinaryDevice &device, const std::string &title,
			   const std::vector<bool *> &inputs) {
	std::string labels = " ";
	for (int i = 0; i < inputs.size(); ++i) {
		labels += " ";
		labels += char('a' + i);
		labels += " |";
	}

	std::cout << "\n"
			  << title << " Truth Table:\n";
	std::cout << labels << " out\n";
	std::cout << "----+---+-----\n";

	std::vector<bool> originalValues(inputs.size());
	for (int i = 0; i < inputs.size(); ++i) {
		originalValues[i] = *inputs[i];
	}

	for (int i = 0; i < (1 << inputs.size()); ++i) {
		for (int j = 0; j < inputs.size(); ++j) {
			*inputs[j] = i & (1 << j);
		}
		device.compute();

		std::cout << labels << "  " << device.out << "\n";
	}
	std::cout << "\n";

	for (int i = 0; i < inputs.size(); ++i) {
		*inputs[i] = originalValues[i];
	}
}