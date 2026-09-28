#include <iostream>
using namespace std;

// Define a class named Demo
class Demo {

public:

    // Constructor
    // It is automatically called when an object is created
    Demo() {

        cout << "Constructor called\n";
    }

    // Destructor
    // It is automatically called when the object is destroyed
    ~Demo() {

        cout << "Destructor called\n";
    }
};

int main() {

    // Create an object of Demo class
    // Constructor is called automatically
    Demo d;

    // When main() ends, object d is destroyed
    // Destructor is called automatically

    return 0;   // End the program
}