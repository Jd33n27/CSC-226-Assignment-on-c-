// 2. What is Method Overriding?
// Definition:
// Method Overriding occurs when a derived (child) class provides a specific implementation of a function that is already defined in its base (parent) class.

// The base class function must be marked as virtual, and the derived class must use the same function signature

// Purpose of Method Overriding:
// It supports runtime polymorphism in C++
// It allows dynamic dispatch (deciding which version of the method to call during execution, not compilation)
// It's commonly used when working with inheritance and abstract classes.


// ##################
// #####Example######
// ##################

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks: Woof!" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog myDog;

    animalPtr = &myDog;
    animalPtr->makeSound(); // Calls Dog's version because of overriding

    return 0;
}