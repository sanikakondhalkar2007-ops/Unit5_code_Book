
#include <iostream>       // Includes input and output functions
using namespace std;      // Uses standard namespace

// Main function
int main()
{
    // Executes three different exception cases
    for (int option : {1, 2, 3})
    {
        // Starts exception handling
        try
        {
            // Throws an integer exception
            if (option == 1)
                throw 7;

            // Throws a double exception
            if (option == 2)
                throw 2.5;

            // Throws a string exception
            throw "Other failure";
        }
        // Handles integer exception
        catch (int n)
        {
            // Displays integer value
            cout << "Integer: " << n << endl;
        }
        // Handles double exception
        catch (double n)
        {
            // Displays double value
            cout << "Double: " << n << endl;
        }
        // Handles character pointer exception
        catch (const char* msg)
        {
            // Displays string message
            cout << "String: " << msg << endl;
        }
        // Handles all other exceptions
        catch (...)
        {
            // Displays general exception message
            cout << "Other exception" << endl;
        }
    }

    // Ends the program
    return 0;
}
