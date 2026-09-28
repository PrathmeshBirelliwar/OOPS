#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Constructor to initialize real and imaginary parts
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart)
    {
    }

    // Friend function for operator overloading
    friend Complex operator+(int value, const Complex& number);

    // Function to display the complex number
    void display() const
    {
        cout << real;

        if (imaginary >= 0)
        {
            cout << " + ";
        }
        else
        {
            cout << " - ";
        }

        cout << (imaginary >= 0 ? imaginary : -imaginary) << "i" << endl;
    }
};

// Definition of friend operator+ function
Complex operator+(int value, const Complex& number)
{
    // Add integer value to the real part
    return Complex(value + number.real, number.imaginary);
}

int main()
{
    // Create a complex number
    Complex number(2, 3);

    // Add integer with complex number
    Complex result = 10 + number;

    cout << "Result: ";
    result.display();

    return 0;
}