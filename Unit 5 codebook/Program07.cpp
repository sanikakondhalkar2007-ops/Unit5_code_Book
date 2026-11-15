
#include <iostream>       // Includes input and output functions
#include <string>         // Includes string class
using namespace std;      // Uses standard namespace

// Creates a function template
template <typename T>

// Function to find minimum value
T minimum(T a, T b)
{
    // Compares two values and returns smaller value
    return (a < b) ? a : b;
}

// Main function
int main()
{
    // Finds minimum of two integers
    cout << minimum(4, 9) << endl;

    // Explicitly uses double data type
    cout << minimum<double>(4, 9.5) << endl;

    // Finds minimum of two strings
    cout << minimum(string("Apple"), string("Pear")) << endl;

    // minimum(4, 9.5) causes template deduction conflict
    // because T cannot be deduced as both int and double

    // Ends the program
    return 0;
}
