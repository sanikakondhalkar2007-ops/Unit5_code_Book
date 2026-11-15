
#include <iostream>       // Includes input and output functions
#include <stdexcept>      // Includes runtime_error
#include <string>         // Includes string class
using namespace std;      // Uses standard namespace

// Creates a Guard class
class Guard
{
    // Stores guard name
    string name;

public:
    // Constructor initializes guard name
    Guard(string n) : name(n)
    {
        // Displays resource acquisition message
        cout << "Acquire " << name << endl;
    }

    // Destructor releases resource
    ~Guard()
    {
        // Displays resource release message
        cout << "Release " << name << endl;
    }
};

// Function that generates an exception
void worker()
{
    // Creates first guard object
    Guard g1("Guard 1");

    // Creates second guard object
    Guard g2("Guard 2");

    // Throws runtime exception
    throw runtime_error("Worker failed");
}

// Function that catches and rethrows exception
void service()
{
    // Starts exception handling
    try
    {
        // Calls worker function
        worker();
    }
    // Catches standard exception
    catch (const exception&)
    {
        // Displays logging message
        cout << "Logged" << endl;

        // Rethrows the original exception
        throw;
    }
}

// Main function
int main()
{
    // Starts exception handling
    try
    {
        // Calls service function
        service();
    }
    // Handles rethrown exception
    catch (const exception& e)
    {
        // Displays exception message
        cout << e.what() << endl;
    }

    // Ends the program
    return 0;
}
