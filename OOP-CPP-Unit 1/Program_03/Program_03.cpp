#include <iostream>
using namespace std;

int main() {

    // Declare and initialize an array containing
    // marks of five students
    int marks[5] = {78, 82, 91, 67, 88};

    // Loop through all five elements of the array
    for (int i = 0; i < 5; i++) {

        // Display the current array element
        cout << marks[i] << " ";
    }

    return 0;   // End the program
}