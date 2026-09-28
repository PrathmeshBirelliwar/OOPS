#include <iostream>
using namespace std;

// Define a class named Test
class Test {

private:

    // Private data member
    int value;

public:

    // Constructor
    // Initializes the private data member
    Test(int v) {

        value = v;
    }

    // Inline member function
    // Returns the value of the private data member
    inline int getValue() {

        return value;
    }

    // Friend function declaration
    // It can access private members of the class
    friend void show(Test t);
};

// Friend function definition
void show(Test t) {

    // Access the private member directly
    cout << t.value;
}

int main() {

    // Create an object and initialize it with 50
    Test obj(50);

    // Access value using the inline getter function
    cout << obj.getValue() << endl;

    // Access value using the friend function
    show(obj);

    return 0;   // End the program
}