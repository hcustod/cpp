#include <iostream>

void greet();
int add(int a, int b);

int square(int x);
double square(double x); // overload.


int main() {
    greet();

    int sum = add(5, 4);
    std::cout << "Sum: " << sum << std::endl;

    // Overloading
    int Squared = square(5);
    std::cout << "Int Squared: " << Squared << std::endl;

    double Squared2 = square(5.5);
    std::cout << "Double Squared: " << Squared2 << std::endl;

    // Use of Captured Lambdas
    int x = 10;

    auto printX = [x]() {
        std::cout << "Captured by value: " << x << std::endl;
    };

    auto modifyX = [&x]() {
        x += 5;
    };

    printX();   // Prints 10 - captured by value thus copy.
    modifyX();  // Modifies og x by +5.
    printX();   // Still prints 10 (Original capture is a copy not reference to original).

    std::cout << "Final x: " << x << std::endl;

    return 0;
}

void greet() {
    std::cout << "Functions Lesson!" << std::endl;
}

int add(int a, int b) {
    return a + b;
}

int square(int x) {
    return x * x;
}

double square(double x) {
    return x * x;
}



