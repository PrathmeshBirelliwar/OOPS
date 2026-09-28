#include <iostream>
using namespace std;

// Define a class named Student
class Student {

public:

    // Static data member
    // It is shared by all objects of the class
    static int count;

    // Constructor
    // Increases count whenever a new object is created
    Student() {

        count++;
    }
};

// Define and initialize the static data member
int Student::count = 0;

int main() {

    // Create three Student objects
    Student s1, s2, s3;

    // Display the total number of objects created
    cout << Student::count;

    return 0;   // End the program
}