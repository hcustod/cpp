#include <iostream>
#include <array>
#include <vector>

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
    std::cout << "While-loop:\n";
    int i = 0;
    while (i < 5) {
        std::cout << "Numbers[" << i << "] = " << i << "\n";
        i++;
    }
    std::cout << "\n";

    // Array length check with sizeof
    int length = sizeof(nums) / sizeof(nums[0]);
    std::cout << "Length of array: " << length << "\n";

    // Conditional loop
    std::cout << "Print only even numbers:\n";
    for (int n : nums) {
        if ( n % 2 == 0) {
            std::cout << n << "\n";
        }
    }
    std::cout << "\n";

    // 2D array example
    int matrix[2][3] = {
        {1, 2, 3},
        {3, 4, 5}
    };

    std::cout << "Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << "\n";
        }
    }

    // Demonstrate 2D memory layout (row-major)
    std::cout << "Matrix flattened (row-major order): \n";
    for (int a = 0; a < 2 * 3; a++) {
        std::cout << *(&matrix[0][0] + a) << " ";
    }
    std::cout << "\n";

    // std::array = Fixed size safer array (C++11+)
    std::array<int, 3> safeArr = {7, 8, 9};

    std::cout << "std::array with .at(): \n";
    for (size_t i = 0; i < safeArr.size(); ++i) {
        std::cout << safeArr.at(i) << "\n";
    }

    // std::vector - Dynamic size
    std::vector<int> vec = {100, 200, 300};
    vec.push_back(400);

    std::cout << "std::vector:\n";
    for ( int val : vec) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    // Conditional filtering inside loops
    std::cout << "Even values in vector: \n";
    for (int val : vec) {
        if (val % 2 == 0) std::cout << val << "\n";
    }
    std::cout << "\n";

    // Dangerous uninitialized array
    int dangerousArr[3];
    std::cout << "Uninitialized values (garbage): ";
    for (int i = 0; i < 3; i++) {
        std::cout << dangerousArr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}