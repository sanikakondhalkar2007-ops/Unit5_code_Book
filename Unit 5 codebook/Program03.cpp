
#include <iostream>       // Includes input and output functions
#include <stdexcept>      // Includes standard exception classes
using namespace std;      // Uses standard namespace

// Function to validate student marks
void validate(int marks)
{
    // Checks whether marks are outside the valid range
    if (marks < 0 || marks > 100)
        throw out_of_range("Marks outside 0..100");
}

// Main function
int main()
{
    // Tests four different marks values
    for (int marks : {-1, 0, 100, 101})
    {
        // Starts exception handling
        try
        {
            // Calls validation function
            validate(marks);

            // Displays valid marks
            cout << "Valid: " << marks << endl;
        }
        // Handles standard exceptions
        catch (const exception& e)
        {
            // Displays exception message
            cout << e.what() << endl;
        }
    }

    // Ends the program
    return 0;
}
