#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    // Virtual destructor
    virtual ~Base()
    {
        cout << "Base destructor" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    // Derived class destructor
    ~Derived() override
    {
        cout << "Derived destructor" << endl;
    }
};

int main()
{
    // Base pointer points to a Derived object
    Base* pointer = new Derived();

    // Delete the object using the base pointer
    delete pointer;

    return 0;
}