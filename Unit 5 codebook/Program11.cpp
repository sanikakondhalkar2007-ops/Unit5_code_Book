
#include <iostream>       // Includes input and output functions
using namespace std;      // Uses standard namespace

// Creates a class template
template <typename T>
class Box
{
    // Declares variable to store value
    T value;

public:
    // Constructor initializes value
    Box(T v) : value(v) {}

    // Function returns stored value
    T get() const
    {
        return value;
    }
};

// Main function
int main()
{
    // Explicitly creates Box object of integer type
    Box<int> count(42);

    // Explicitly creates Box object of double type
    Box<double> price(19.5);

    // Displays integer value
    cout << count.get() << endl;

    // Displays double value
    cout << price.get() << endl;

    // Ends the program
    return 0;
}
