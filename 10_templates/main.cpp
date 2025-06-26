#include <iostream>
#include <string>

// 1. Function Template
template <typename T>
T add(T a, T b) {
    return a + b;
}

// 2. Class Template
template <typename T>
class Box {
    private:
    T value;

    public:
    Box(T val) : value(val) {}

    T getValue() const {
        return value;
    }

    void setValue(T val) {
        value = val;
    }
};

int main() {
    // Function Template usage
    std::cout << "int add: " << add(3, 5) << "\n" <<  std::endl;
    std::cout << "double add: " << add(5.5, 6.6) << "\n" << std::endl;
    std::cout << "string add: " << add(std::string("Hi, "), std::string("my name is Hank!")) << "\n" << std::endl;

    // Class Template usage
    Box<int> intBox(43);
    std::cout << "intbox: " <<  intBox.getValue() << "\n" << std::endl;

    Box<std::string> stringBox("Hello, World!");
    std::cout << "strbox: " << stringBox.getValue() << "\n" << std::endl;

    // Change value
    stringBox.setValue("Hello, World has changed!! ");
    std::cout << "strbox updated: " << stringBox.getValue() << "\n" << std::endl;

    return 0;
}