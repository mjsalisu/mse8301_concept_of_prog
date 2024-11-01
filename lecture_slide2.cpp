#include <iostream>
using namespace std;

int main()
{
    /*
        (1) Suppose that score is an int variable. Consider the following if statements:
        if (score >= 70)
            cout<< “Discount = 20%”<<endl;

        a. What is the output if the value of score is 75? Why?
            ANS: For score = 75: Output is "Discount = 20%" because the condition is true.

        b. What is the output if the value of score is 65? Why?
            ANS: For score = 65: There is no output because the condition is false.
    */

    /*
        (2) Write a program that prompts the user to input a number. The program should then output the
        number and a message saying whether the number is positive, negative, or zero.
    */
    double number;

    // Prompt the user for input
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0)
    {
        cout << "You entered: " << number << endl;
        cout << "The number is positive." << endl;
    }
    else if (number < 0)
    {
        cout << "You entered: " << number << endl;
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "You entered: " << number << endl;
        cout << "The number is zero." << endl;
    }

    /*
        (3) Rewrite the following expressions using an if…else statement (Assuming that all variables are
        declared properly)
        a. (x<5) ? y=10 : y=20;
        b. (fuel >= 10) ? drive = 150 : drive = 30;
        c. (booksBought >=3) ? discount = 0.2 : discount = 0.05;
    */
    // a
    if (x < 5)
    {
        y = 10;
    }
    else
    {
        y = 20;
    }

    // b
    if (fuel >= 10)
    {
        drive = 150;
    }
    else
    {
        drive = 30;
    }

    // c
    if (booksBought >= 3)
    {
        discount = 0.2;
    }
    else
    {
        discount = 0.05;
    }

    /*
        (4) Write a program that mimics a calculator. The program should take as input two integers and
        the operation to be performed. It should then output the numbers, the operator, and the result.
        (For division, if the denominator is zero, output an appropriate message.)
        Some sample outputs as follows: 5 + 6 = 11 & 10 * 6 = 60
    */
    // Declare variables for the two integers and the operator
    int num1, num2;
    char operation;
    int result;

    // Prompt the user for input
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation based on the input operator
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator." << endl;
        break;
    }

    return 0;
}