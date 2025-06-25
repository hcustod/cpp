#include <iostream>
#include <string>

// Base class
class Animal {
    protected:
    std::string name;
    int age;

    public:
    Animal(std::string name, int age) : name(name), age(age) {};

     void speak() const {
         std::cout << name << "makes an animal sound.\n";
     }

    void showInfo() const {
         std::cout << "Name: " << name << ", Age: " << age << std::endl;
     }
};

// Derived class
class Dog : public Animal {
    private:
    std::string breed;

    public:
    Dog(std::string name, int age, std::string breed)
        : Animal(name, age), breed(breed) {}

    void speak() const {
        std::cout << name << "Barks! Woof!\n";
    }

    void showDogInfo() const {
        showInfo();
        std::cout << "Breed: " << breed << std::endl;
    }
};

int main() {
    Animal a("Animal_1", 5);
    a.speak();
    a.showInfo();

    std::cout << "\n";

    Dog d("Rex", 3, "German Sheperd");
    d.speak();
    d.showDogInfo();

    return 0;
}