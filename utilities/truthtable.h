#ifndef TRUTHTABLE_H
#define TRUTHTABLE_H

#include "../gates/binarydevice.h"

#include <iostream>
#include <vector>

namespace gater {
	void truthTable(BinaryDevice &device, const std::string &title,
					const std::vector<bool *> &inputs);
}

#endif