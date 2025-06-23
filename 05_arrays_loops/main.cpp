#include <iostream>

int main() {
    // Fixed sized array
    int nums[5] = {1, 2, 3, 4, 5};

    // Indexed for loop
    std::cout << "Indexed for-loop:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Numbers[" << i << "] = " << nums[i] << "\n";
    }

    // Range based for loop (C++ V.11+)
    std::cout << "Range based for loop: \n";
    for (int n : nums) {
        std::cout << n << "\n";
    }
    std::cout << "\n";

    // While loop over array


}