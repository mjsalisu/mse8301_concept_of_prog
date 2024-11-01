#include <iostream>
using namespace std;

// Function to modify a variable by value
void modifyByValue(int num)
{
    // Adds 10 to the local copy of `num` (does not affect the original variable)
    num += 10;
    // Display the modified local copy
    cout << "Inside modifyByValue: " << num << endl; // Expected output: 20
}

// Function to modify a variable by reference
void modifyByReference(int &num)
{
    // Adds 10 directly to the original variable since it is passed by reference
    num += 10;
    // Display the modified original variable
    cout << "Inside modifyByReference: " << num << endl; // Expected output: 20
}

int main()
{
    // Initialize two variables with the same value (10)
    int originalByVal = 10;
    int originalByRef = 10;

    // Call modifyByValue function (passes a copy of originalByVal)
    modifyByValue(originalByVal);
    // Call modifyByReference function (passes a reference to originalByRef)
    modifyByReference(originalByRef);

    // Display the value of originalByVal after modifyByValue
    cout << "After modifyByValue: " << originalByVal << endl; // Expected output: 10 (unchanged)

    // Display the value of originalByRef after modifyByReference
    cout << "After modifyByReference: " << originalByRef << endl; // Expected output: 20 (modified)

    return 0;
}
