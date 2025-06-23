#include <iostream>
#include <string>

// Class def
class Dog {
    private:
    std::string name;
    int age;

    public:
    // Constructor
    Dog(std::string name, int age) {
        name = name;
        age = age;
    }

    // Member function
    void bark() {
        std::cout << name << "barks! Woof!\n" << std::endl;
    }

    // Member function defined outside the class
    void showInfo();

    // Getter
    int getAge() const {
        return age;
    }

    // Setter
    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        }
    }
};

// Member function defined outside the class
void Dog::showInfo() {
    std::cout << "Dog name: " << name << ", Age: " << age << "\n";
}

int main() {
    // Object creation on stack
    Dog myDog("Rex", 4);
    myDog.bark();
    myDog.showInfo();

    myDog.setAge(5);
    std::cout << "Updated age: " << myDog.getAge() << "\n";

    // Object creation on heap
    Dog* dogPtr = new Dog("Buddy", 2);
    dogPtr->bark();
    dogPtr->showInfo();
    delete dogPtr;

    return 0;
}