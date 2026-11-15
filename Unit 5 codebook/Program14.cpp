
#include <iostream>       // Includes input and output functions
using namespace std;      // Uses standard namespace

// Creates variable template for meter to centimeter conversion
template <typename T>
inline constexpr T meterToCm = static_cast<T>(100);

// Main function
int main()
{
    // Stores length in meters
    double meters = 5.5;

    // Displays length in meters
    cout << "Meters: " << meters << endl;

    // Converts meters into centimeters
    cout << "Centimeters: "
         << meters * meterToCm<double> << endl;

    // Displays conversion constant as integer
    cout << "Integer conversion: "
         << meterToCm<int> << endl;

    // Ends the program
    return 0;
}
