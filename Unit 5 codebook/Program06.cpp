
#include <iostream>       // Includes input and output functions
#include <vector>         // Includes vector container
#include <stdexcept>      // Includes out_of_range
using namespace std;      // Uses standard namespace

// Main function
int main()
{
    // Creates vector containing two marks
    vector<int> marks{80, 90};

    // Starts exception handling
    try
    {
        // Accesses element at index 1
        cout << "Marks: " << marks.at(1) << endl;

        // Tries to access element at index 2
        cout << marks.at(2) << endl;
    }
    // Handles invalid index exception
    catch (const out_of_range&)
    {
        // Displays invalid index message
        cout << "Invalid index" << endl;
    }

    // Ends the program
    return 0;
}
