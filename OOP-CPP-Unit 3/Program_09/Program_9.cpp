#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    // Virtual function
    virtual void sound() const
    {
        cout << "Animal makes a sound" << endl;
    }

    // Virtual destructor
    virtual ~Animal() = default;
};

// Derived class Dog
class Dog : public Animal
{
public:
    // Override the virtual function
    void sound() const override
    {
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat
class Cat : public Animal
{
public:
    // Override the virtual function
    void sound() const override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    // Create Dog and Cat objects
    Dog dog;
    Cat cat;

    // Base class pointer points to Dog object
    Animal* animal = &dog;
    animal->sound();

    // Same base pointer now points to Cat object
    animal = &cat;
    animal->sound();

    return 0;
}