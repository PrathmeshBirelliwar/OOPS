#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Normal function (not virtual)
    void display() const
    {
        cout << "Base display function" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Same function name in derived class
    void display() const
    {
        cout << "Derived display function" << endl;
    }
};

int main()
{
    // Create a Derived class object
    Derived derivedObject;

    // Base class pointer points to Derived object
    Base* basePointer = &derivedObject;

    // Calls Base::display() because display() is not virtual
    basePointer->display();

    return 0;
}