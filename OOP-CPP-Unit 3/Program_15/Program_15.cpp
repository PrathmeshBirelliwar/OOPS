#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual function
    virtual void display() const
    {
        cout << "Base object" << endl;
    }

    // Virtual destructor
    virtual ~Base() = default;
};

// Derived class
class Derived : public Base
{
public:
    // Override display function
    void display() const override
    {
        cout << "Derived object" << endl;
    }
};

// Function receiving Base object by value
void displayByValue(Base object)
{
    object.display();
}

// Function receiving Base object by reference
void displayByReference(const Base& object)
{
    object.display();
}

int main()
{
    // Create a Derived object
    Derived derived;

    // Passing Derived object by value
    cout << "Passing by value: ";
    displayByValue(derived);

    // Passing Derived object by reference
    cout << "Passing by reference: ";
    displayByReference(derived);

    return 0;
}