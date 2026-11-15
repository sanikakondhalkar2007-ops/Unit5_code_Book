
#include <iostream>       // Includes input and output functions
using namespace std;      // Uses standard namespace

// Creates a class template
template <typename T>
class Pair
{
    // Declares two variables of same type
    T first, second;

public:
    // Constructor initializes both values
    Pair(T a, T b) : first(a), second(b) {}

    // Function returns sum of two values
    T sum() const
    {
        return first + second;
    }
};

// Main function
int main()
{
    // Explicitly specifies integer template argument
    Pair<int> numbers(2, 3);

    // Displays sum of two numbers
    cout << "Sum: " << numbers.sum() << endl;

    // Ends the program
    return 0;
}
