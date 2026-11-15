
#include <iostream>       // Includes input and output functions
#include <array>          // Includes array container
#include <stdexcept>      // Includes out_of_range
using namespace std;      // Uses standard namespace

// Creates template with type and array size
template <typename T, size_t N = 3>
class Fixed
{
    // Creates fixed-size array with default values
    array<T, N> data{};

public:
    // Function to access array element
    T& at(size_t i)
    {
        // Returns element with bounds checking
        return data.at(i);
    }
};

// Main function
int main()
{
    // Creates array of 5 double values
    Fixed<double, 5> values;

    // Starts exception handling
    try
    {
        // Stores value at first position
        values.at(0) = 10.5;

        // Displays first element
        cout << "First: " << values.at(0) << endl;

        // Stores value at last position
        values.at(4) = 50.5;

        // Displays last element
        cout << "Last: " << values.at(4) << endl;

        // Tries to access invalid position
        values.at(5) = 60.5;
    }
    // Handles invalid index exception
    catch (const out_of_range&)
    {
        // Displays error message
        cout << "Invalid index" << endl;
    }

    // Ends the program
    return 0;
}
