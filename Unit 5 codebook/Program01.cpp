
#include <iostream>       // Includes input and output functions
#include <stdexcept>      // Includes exception classes
using namespace std;      // Allows use of cout without std::

 // Function to perform division
double divide(double a, double b)
{
    // Checks whether denominator is zero
    if (b == 0)
        throw invalid_argument("Zero denominator");

    // Returns the division result
    return a / b;
}

// Main function
int main()
{
    // Tests positive, zero and negative denominators
    for (double divisor : {2.0, 0.0, -2.0})
    {
        // Starts exception handling
        try
        {
            // Calls division function and displays result
            cout << divide(10, divisor) << endl;
        }
        // Handles invalid denominator exception
        catch (const invalid_argument& e)
        {
            // Displays exception message
            cout << e.what() << endl;
        }
    }

    // Ends the program
    return 0;
}
