
#include <iostream>       // Includes input and output functions
#include <stdexcept>      // Includes exception classes
using namespace std;      // Uses standard namespace

// Creates a custom exception class
class InsufficientBalance : public runtime_error
{
public:
    // Constructor initializes exception message
    InsufficientBalance()
        : runtime_error("Insufficient balance") {}
};

// Creates an Account class
class Account
{
    // Initializes account balance to 1000
    double balance = 1000;

public:
    // Function to withdraw money
    void withdraw(double amount)
    {
        // Checks whether withdrawal amount is zero or negative
        if (amount <= 0)
            throw invalid_argument("Amount must be positive");

        // Checks whether balance is sufficient
        if (amount > balance)
            throw InsufficientBalance();

        // Deducts amount from account balance
        balance -= amount;
    }

    // Function to return current balance
    double getBalance() const
    {
        return balance;
    }
};

// Main function
int main()
{
    // Creates an Account object
    Account a;

    // Handles successful withdrawal
    try
    {
        // Withdraws 500 rupees
        a.withdraw(500);

        // Displays successful withdrawal message
        cout << "Withdrawal successful" << endl;

        // Displays remaining balance
        cout << "Balance: " << a.getBalance() << endl;
    }
    // Handles withdrawal exceptions
    catch (const exception& e)
    {
        // Displays exception message
        cout << e.what() << endl;
    }

    // Tests zero-amount withdrawal
    try
    {
        // Attempts to withdraw zero rupees
        a.withdraw(0);
    }
    // Handles invalid amount exception
    catch (const exception& e)
    {
        // Displays exception message
        cout << e.what() << endl;
    }

    // Displays final account balance
    cout << "Final Balance: " << a.getBalance() << endl;

    // Ends the program
    return 0;
}
