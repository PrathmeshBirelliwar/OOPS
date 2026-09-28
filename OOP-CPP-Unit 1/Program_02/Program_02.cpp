#include <iostream>
using namespace std;

int main() {

    // Store student's marks
    int marks = 45;

    // Check whether the student has passed
    if (marks >= 40) {

        // Execute when marks are 40 or above
        cout << "Pass";

    } else {

        // Execute when marks are below 40
        cout << "Fail";
    }

    return 0;   // End the program
}