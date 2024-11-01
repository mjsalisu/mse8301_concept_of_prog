#include <iostream>
#include <cmath> // Include the cmath header for sqrt and pow functions
using namespace std;

// (2a) Function prototype
float vol(float r);
float PI = 3.14159; // Define a constant for PI

// (3) extention of 2a
void display(float r, float volume);

// (Bonus: by Ref)
void calculate(int a, int b, int &sum, int &product);

int main()
{
    /*
        (1) Write a program the accept two integers a and b. Use predefined functions sqrt(x) and
        pow(x, y) to compute the followings:
        a) Square root of a
        b) Square root of b
        c) a power b
        Print the results
    */

    // Declare variables for the two integers
    int a, b;

    // Prompt the user for input
    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    // Compute square roots and power
    double sqrtA = sqrt(a);   // Square root of a
    double sqrtB = sqrt(b);   // Square root of b
    double power = pow(a, b); // a raised to the power of b

    // Print the results
    cout << "Square root of " << a << " = " << sqrtA << endl;
    cout << "Square root of " << b << " = " << sqrtB << endl;
    cout << a << " raised to the power of " << b << " = " << power << endl;

    /*
      (2a) Write a C++ program that has a function prototype vol() that takes one floating point
      value as a parameter and returns a floating point value.
      (2b) Extend your solution in (2a) by defining the vol function as follows: if the parameter
      of the function is a radius r of a sphere, define the function to calculate and return the
      volume of the sphere (volume = (4/3)PI.r3).
      (2c) Call the function by given the appropriate argument.
    */

    // (2c)
    float radius;

    // Prompt the user for the radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Call the vol function and store the result
    float volume = vol(radius);

    // Output the result
    cout << "The volume of the sphere with radius " << radius << " is: " << volume << endl;

    /*  (3) Extend your solution in the last exercise by adding a function display() that takes no
      parameter and did not return any value. Define the display() function to print the radius
      of the sphere and its corresponding volume. Call the function in the main function.
    */

    // Call the display function to show the results (using same data in 2c)
    display(radius, volume);

    // (Bonus: by Ref)
    int sum, product;
    calculate(5, 10, sum, product);

    cout << "Sum: " << sum << endl;         // Output: Sum: 15
    cout << "Product: " << product << endl; // Output: Product: 50

    return 0;
}

// (2b) Function definition to calculate volume of a sphere
float vol(float r)
{
    return (4.0 / 3.0) * PI * r * r * r; // Volume formula
}

// (3) Function definition to display the radius and volume
void display(float r, float volume)
{
    cout << "Radius of the sphere: " << r << endl;
    cout << "Volume of the sphere: " << volume << endl;
}

// (Bonus: by Ref) void function use reference parameters to return the multiple values.
void calculate(int a, int b, int &sum, int &product)
{
    sum = a + b;     // Modifying sum by reference
    product = a * b; // Modifying product by reference
}