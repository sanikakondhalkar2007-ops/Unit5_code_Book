
#include <iostream>       // Includes input and output functions
#include <algorithm>      // Includes sorting function
#include <functional>     // Includes greater comparator
using namespace std;      // Uses standard namespace

// Creates a function template with array size
template <typename T, size_t N>

// Function to sort array in descending order
void sortValues(T (&a)[N])
{
    // Sorts array from largest to smallest
    sort(a, a + N, greater<T>());
}

// Main function
int main()
{
    // Creates integer array
    int values[] = {3, 1, 2};

    // Creates double array
    double readings[] = {2.5, 1.5};

    // Sorts integer array
    sortValues(values);

    // Sorts double array
    sortValues(readings);

    // Displays sorted integer array
    for (int n : values)
        cout << n << " ";

    // Moves to next line
    cout << endl;

    // Displays sorted double array
    for (double n : readings)
        cout << n << " ";

    // Ends the program
    return 0;
}
