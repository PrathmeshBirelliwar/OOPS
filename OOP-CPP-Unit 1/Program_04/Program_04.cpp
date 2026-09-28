#include <iostream>
using namespace std;

// Function prototype
// It tells the compiler about the function
int add(int, int);

int main() {

    // Declare two integer values
    int a = 10, b = 20;

    // Call the add() function and display the result
    cout << "Sum = " << add(a, b) << endl;

    return 0;   // End the program
}

// Function definition
// Returns the sum of two integers
int add(int x, int y) {

    return x + y;
}