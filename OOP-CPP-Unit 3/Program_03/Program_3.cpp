#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor to initialize the value
    explicit Number(int givenValue) : value(givenValue)
    {
    }

    // Overloading unary minus (-) operator
    Number operator-() const
    {
        return Number(-value);
    }

    // Function to display the value
    void display() const
    {
        cout << value << endl;
    }
};

int main()
{
    // Create an object with value 25
    Number first(25);

    // Apply unary minus operator to the object
    Number second = -first;

    cout << "Original value: ";
    first.display();

    cout << "Negated value: ";
    second.display();

    return 0;
}