#include <iostream>

int main() {
    // Pointer declaration and initialization
    int value = 42;
    int* ptr = &value; // Holds address of value;

    std::cout << "Value: " << value << std::endl;
    std:cout << "Address of value (&value): " << &value << std::endl;
    std::cout << "Pointer (ptr): " << ptr << std::endl;
    std::cout << "Dereferenced pointer (*ptr): " << *ptr << std::endl;

    // Modify value through pointer
    *ptr = 99;
    std::cout << "Modified value through pointer: " << value << std::endl;

    // Null pointer
    int* nullPtr = nullptr;
    if (nullPtr == nullptr) {
        std::cout << "Null pointer is null (safe to check)\n" << std::endl;
    }

    // Pointers and arrays
    int arr[3] = {10, 20, 30};
    int* arrPtr = arr;

    std::cout << "Array values via pointer:\n" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << *(arrPtr + i) << std::endl;    // Pointer arithmetic
    }
    std::cout << "\n";

    // Dynamic allocation (heap) with new/delete
    int* heapValue = new int;       // Allocate array on heap
    *heapValue = 123;
    std::cout << "Heap allocated value: " << *heapValue << std::endl;
    delete heapValue; // Free heap memory

    // Dynamic array
    int* heapArrray = new int[3];
    heapArrray[0] = 10;
    heapArrray[1] = 20;
    heapArrray[2] = 30;

    std::cout << "Heap array:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << heapArray[i] << " ";
    }
    std::cout << "\n" << std::endl;
    delete[] heapArrray;        // Always delete/ free allocated array

    // Common dangers
    int* wildPtr;               // Uninitialized pointer -> undefined behaviour
    // std:cout << *wildPtr;    // Dangerous

    return 0;
}