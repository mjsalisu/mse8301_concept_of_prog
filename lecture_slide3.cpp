#include <iostream>
using namespace std;

int main()
{
    /*
        (1) Write a program that uses either while or for loops to perform the following steps:
        a) Prompt the user to input two integers: firstNum & secondNum (firstNum must be less than the secondNum).
        b) Output all odd numbers between firstNum and secondNum.
        c) Output the sum of all even numbers between firstNum and secondNum.
    */

    int firstNum, secondNum;

    // Step a: Prompt the user for input
    cout << "Enter the first integer (must be less than the second): ";
    cin >> firstNum;
    cout << "Enter the second integer: ";
    cin >> secondNum;

    // Validate that firstNum is less than secondNum
    while (firstNum >= secondNum)
    {
        cout << "Invalid input. First number must be less than the second number." << endl;
        cout << "Enter the first integer: ";
        cin >> firstNum;
        cout << "Enter the second integer: ";
        cin >> secondNum;
    }

    // Step b: Output all odd numbers between firstNum and secondNum
    cout << "Odd numbers between " << firstNum << " and " << secondNum << " are: ";
    for (int i = firstNum + 1; i < secondNum; ++i)
    {
        if (i % 2 != 0)
        { // Check if the number is odd
            cout << i << " ";
        }
    }
    cout << endl;

    // Step c: Output the sum of all even numbers between firstNum and secondNum
    int evenSum = 0;
    for (int i = firstNum + 1; i < secondNum; ++i)
    {
        if (i % 2 == 0)
        {                 // Check if the number is even
            evenSum += i; // Add to the sum
        }
    }

    cout << "The sum of all even numbers between " << firstNum << " and " << secondNum << " is: " << evenSum << endl;

    // sum of the squares of the first ten int (from 1 to 10) and outputs the result.
    int sum = 0;
    int n = 1;
    while (n <= 10)
    {
        sum = sum + n * n;
        n = n + 1;
    }
    cout << "Sum = " << sum;

    //
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}