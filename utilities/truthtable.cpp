#include "truthtable.h"

void gater::truthTable(LogicGate &device, const std::string &title,
                       const std::vector<bool *> &inputs) {
    std::cout << title << " Truth Table:\n ";

    // Label the columns. This supports up to 26 inputs, which is fine
    // because 2^26 is already too many rows
    for (int i = 0; i < inputs.size(); ++i) {
        std::cout << " " << char('a' + i) << " |";
    }

    std::cout << " out\n-";
    for (int i = 0; i < inputs.size(); ++i) {
        std::cout << "---+";
    }
    std::cout << "-----\n";

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

void gater::truthTable(Combination &combo, const std::string &title, const bool &out) {
    std::cout << title << " Truth Table:\n ";

    // Label the columns. This supports up to 26 inputs, which is fine
    // because 2^26 is already too many rows
    for (int i = 0; i < combo.inputs.size(); ++i) {
        std::cout << " " << char('a' + i) << " |";
    }

    std::cout << " out\n-";
    for (int i = 0; i < combo.inputs.size(); ++i) {
        std::cout << "---+";
    }
    std::cout << "-----\n";

    // backup of the original values of inputs
    std::vector<bool> originalValues(combo.inputs.size());
    int i = 0;
    for (auto &input : combo.inputs) {
        originalValues[i++] = *input;
    }

    // we iterate bitwise over 2^n permutations and combinations
    // this will support atleast 32, which is >26.
    for (int i = 0; i < (1 << combo.inputs.size()); ++i) {
        int j = combo.inputs.size();
        for (auto &input : combo.inputs) {
            *input = i & (1 << --j);
        }
        combo.compute();

        std::cout << " ";
        for (auto &input : combo.inputs) {
            std::cout << " " << *input << " |";
        }

        std::cout << "  " << out << "\n";
    }
    std::cout << "\n";

    // restore original values
    i = 0;
    for (auto &input : combo.inputs) {
        *input = originalValues[i++];
    }

    // restore original combo output
    combo.compute();
}