#include <iostream>
using namespace std;

int main()
{
    // (1) Writing A simple C++ Program to accept numbers and use arithmetic operators on them.

    // Declare variables for the numbers
    double num1 = 5, num2 = 9;

    // Prompt the user for input
    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;

    // Perform arithmetic operations
    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double quotient = 0.0;

    // Check for division by zero
    if (num2 != 0)
    {
        quotient = num1 / num2;
    }
    else
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }

    // Output the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;

    if (num2 != 0)
    {
        cout << "Quotient: " << quotient << endl;
    }

    return 0;
}
