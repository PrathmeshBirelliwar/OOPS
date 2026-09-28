#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Virtual function
    virtual double area() const
    {
        return 0.0;
    }

    // Virtual destructor
    virtual ~Shape() = default;
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth)
    {
    }

    // Override area() function
    double area() const override
    {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    // Constructor
    explicit Circle(double givenRadius) : radius(givenRadius)
    {
    }

    // Override area() function
    double area() const override
    {
        constexpr double PI = 3.141592653589793;

        return PI * radius * radius;
    }
};

// Function accepts a reference to the base class
void printArea(const Shape& shape)
{
    // Calls the correct derived class area()
    cout << "Area: " << shape.area() << endl;
}

int main()
{
    // Create Rectangle and Circle objects
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);

    // Pass derived objects using base-class reference
    printArea(rectangle);
    printArea(circle);

    return 0;
}