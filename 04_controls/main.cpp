#include <iostream>
#include <string>

int main() {

    // If-Else
    int score = 85;
    if (score >= 90) {
        std::cout << "You win!" << std::endl;
    } else if (score == 80) {
        std::cout << "You lose!" << std::endl;
    } else {
        std::cout << "Im not sure! Tie?" << std::endl;
    }

    // Switch
    int day = 3;
    switch (day) {
        case 1: std::cout << "January"; break;
        case 2: std::cout << "February"; break;
        case 3: std::cout << "March"; break;
        case 4: std::cout << "April"; break;
        default: std::cout << "Okay"; break;
    }

    // While loop
    int count = 0;
    while (count < 2) {
        std::cout << "Not there yet:" << count << std::endl;
        count++;
    }

    // Do while
    int tries = 0;
    std::string password;
    do {
        std::cout << "Enter password: ";
        std::cin >> password;
        tries++;
    } while (password != "admin" && tries < 10);
    std::cout << (password == "admin" ? "Access granted\n" : "Access denied\n") << std::endl;


    // For loop
    for (int i = 0; i <= 10; i++) {
        std::cout << "For loop i: " << i << std::endl;
    }


    // Break and Continue
    for (int i = 0; i <= 10; i++) {
        if (i == 3) continue;
        if (i == 6) break;
        std::cout << "Loop with continue & break: " << i << std::endl;
    }

    // Nested conditions
    int a = 5, b = 10;
    if (a < b) {
        if (b < 20) {
            std::cout << " a < b < 20\n" << std::endl;
        }
    }

    return 0;
}