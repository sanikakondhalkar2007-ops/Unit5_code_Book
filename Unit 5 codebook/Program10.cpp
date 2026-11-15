
#include <iostream>       // Includes input and output functions
#include <string>         // Includes string class
using namespace std;      // Uses standard namespace

// Creates class template with default int type
template <typename T = int>
class Box
{
    // Declares variable to store value
    T value;

public:
    // Constructor initializes value
    Box(T v) : value(v) {}

    // Function returns stored value
    const T& get() const
    {
        return value;
    }
};

// Main function
int main()
{
    // Creates Box object using default int type
    Box<> count(10);

    // Creates Box object using string type
    Box<string> name("Neha");

    // Creates Box object using double type
    Box<double> price(99.50);

    // Displays integer value
    cout << count.get() << endl;

    // Displays string value
    cout << name.get() << endl;

    // Displays double value
    cout << price.get() << endl;

    // Ends the program
    return 0;
}
