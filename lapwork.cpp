#include <iostream>

using namespace std;

int main()
{

    int labWork[40];
    int i;

    // Square indext of first 20 elements
    for (i = 0; i < 20; i++)
    {
        labWork[i] = i * i;
    }

    // Sum of current & previous index of last 20 elements
    for (i = 20; i < 40; i++)
    {
        labWork[i] = i + (i - 1);
    }

    // Printing the elements
    for (i = 0; i < 40; i++)
    {
        cout << labWork[i] << "\n";
    }

    return 0;
}