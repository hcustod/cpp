#include <iostream>
#include <string>

int globalVar = 100;

void showStatic() {
    static int callCount = 0;
    callCount++;
    std::cout << "Static call count: " << callCount << std::endl;
}

int main() {
    int age = 30;
    double pi = 3.14;
    char grade = 'A';
    bool isAlive = true;
    std::string name = "John";

    const int maxScore = 100;

    auto city = std::string("Toronto");
    auto year = 2025;
    auto temp = 36.6;

    int hp = 100;
    int magic = 100;
    int& refHp = hp;
    int& refMagic = magic;
    refHp -= 20;
    refMagic -= 20;
    std::cout << "HP now is: " << refHp << " MP now is: " << refMagic << std::endl;

    int score = 100;
    int* scorePtr = &score;
    *scorePtr = 120;
    std::cout << "Score via pointer: " << score << std::endl;

    showStatic();
    showStatic();

    int x = 10;
    {
        int x = 99;
        std::cout << "Inner x: " << x << std::endl;
    }
    std::cout << "Outer x: " << x << std::endl;

    int y;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "IsAlive: " << isAlive << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Score var: " << score << std::endl;
    std::cout << "Score ptr: " << scorePtr << std::endl;
    std::cout << "Max Score: " << maxScore << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Temp: " << temp << std::endl;

    return 0;
}

