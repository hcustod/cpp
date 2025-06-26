#include <iostream>
#include <string>


class Animal {
    protected:
    std::string name;

public:
    Animal(std::string name) : name(name) {}

    virtual void speak() const {
        std::cout << "This animal made a sound ->" << name << "\n";
    };

    virtual ~Animal() {
        std::cout << "This animal destroyed\n";
    };
};

class Dog : public Animal {
    public:
    Dog(std::string name) : Animal(name) {}

    void speak() const override {
        std::cout << "This dog made a sound ->" << name << "\n";
    }

    ~Dog() {
        std::cout << "This dog destroyed\n";
    }
};

class Cat : public Animal {
    public:
    Cat(std::string name) : Animal(name) {}

    void speak() const override {
        std::cout << "This cat made a sound ->" << name << "\n";
    }

    ~Cat() {
        std::cout << "This cat destroyed\n";
    }
};

int main() {
    // Lives on stack and auto destroyed.
    Dog rex("Rex");
    rex.speak();    // Resolved at compile time.

    Cat yamurata("Yamurata");
    yamurata.speak();

    // Polymorphism through base class pointer
    // Points to heap allocated Dog object. Pointer is of base class animal but function depends on real object type.
    // This allows for switching between Dog, Cat, etc. at runtime via the same interface. Useful for objects that must outlive scope.
    Animal* a1 = new Dog("Elmo");

    a1->speak();

    delete a1;

    return 0;
}

