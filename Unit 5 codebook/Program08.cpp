
#include <iostream>       // Includes input and output functions
#include <string>         // Includes string class
using namespace std;      // Uses standard namespace

// Creates a function template with two data types
template <typename T, typename U>

// Function to add two values
auto addValues(T a, U b) -> decltype(a + b)
{
    // Returns addition of two values
    return a + b;
}

// Main function
int main()
{
    // Adds integer and double values
    cout << addValues(4, 2.5) << endl;

    // Creates first string
    string s1 = "Hello ";

    // Creates second string
    string s2 = "World";

    // Joins and displays both strings
    cout << addValues(s1, s2) << endl;

    // Ends the program
    return 0;
}
