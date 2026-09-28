#include <iostream>
using namespace std;

class Counter
{
private:
    int value;

public:
    // Constructor to initialize the counter
    explicit Counter(int initialValue = 0) : value(initialValue)
    {
    }

    // Prefix increment operator (++counter)
    Counter& operator++()
    {
        ++value;       // Increment the value first
        return *this;  // Return the updated object
    }

    // Postfix increment operator (counter++)
    Counter operator++(int)
    {
        Counter old = *this;  // Store the old value

        ++value;              // Increment the current value

        return old;           // Return the old value
    }

    // Function to display the value
    void display() const
    {
        cout << value << endl;
    }
};

int main()
{
    // Create counter with initial value 5
    Counter counter(5);

    // Prefix increment
    cout << "After prefix increment: ";
    ++counter;
    counter.display();

    // Postfix increment
    cout << "Value returned by postfix increment: ";
    Counter oldValue = counter++;
    oldValue.display();

    // Display the current counter value
    cout << "Counter after postfix increment: ";
    counter.display();

    return 0;
}