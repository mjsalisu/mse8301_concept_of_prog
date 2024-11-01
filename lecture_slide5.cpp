#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

int main()
{
    /*
        (1) Create a one-dimensional array of length 40:
        - First 20 elements: squares of their index.
        - Last 20 elements: sum of the index and the previous index.
    */
    int arr[40]; // Declare the array

    // Fill the first 20 elements with the squares of their index
    for (int i = 0; i < 20; ++i)
    {
        arr[i] = i * i; // Square of index
    }

    // Fill the last 20 elements with the sum of the index and the preceding index
    for (int i = 20; i < 40; ++i)
    {
        arr[i] = i + (i - 1); // Sum of the index and the previous index
    }

    // Display the entire array
    cout << "Array elements:" << endl;
    for (int i = 0; i < 40; ++i)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    /*
        (2) Create two 7x7 matrices, mat1 and mat2:
        - mat1: Each element is the sum of its row and column indices.
        - mat2: Each element is the difference between the product and sum of its row and column indices.
        (2a) Display each matrix.
        (2b) Add mat1 and mat2, and display the result.
    */

    const int SIZE = 7;     // Size of the matrices
    int mat1[SIZE][SIZE];   // First matrix
    int mat2[SIZE][SIZE];   // Second matrix
    int result[SIZE][SIZE]; // Result matrix for addition

    // Fill mat1 with the sum of row and column indices
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
        {
            mat1[row][col] = row + col; // Sum of row and column indices
        }
    }

    // Fill mat2 with the difference between product and sum of row and column indices
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
        {
            mat2[row][col] = (row * col) - (row + col); // Product - Sum of row and column indices
        }
    }

    // (2a) Display mat1
    cout << "\nMatrix 1 (mat1):" << endl;
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
        {
            cout << mat1[row][col] << "\t"; // Use tab for spacing
        }
        cout << endl;
    }

    // (2a) Display mat2
    cout << "\nMatrix 2 (mat2):" << endl;
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
        {
            cout << mat2[row][col] << "\t"; // Use tab for spacing
        }
        cout << endl;
    }

    // (2b) Add mat1 and mat2, storing the result in the result matrix
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
        {
            result[row][col] = mat1[row][col] + mat2[row][col]; // Sum of corresponding elements
        }
    }

    // (2b) Display the result matrix
    cout << "\nResultant Matrix (mat1 + mat2):" << endl;
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
        {
            cout << result[row][col] << "\t"; // Use tab for spacing
        }
        cout << endl;
    }

    /*
        (3i) Calculate and display the sum of each individual column.
        (3ii) Find the largest element in each row and each column.
    */

    // (3i) Sum of each individual column
    cout << "\nSum of each column:" << endl;
    for (int col = 0; col < SIZE; ++col)
    {
        int columnSum = 0; // Initialize sum for the column
        for (int row = 0; row < SIZE; ++row)
        {
            columnSum += result[row][col]; // Add each element in the column
        }
        cout << "Column " << col << ": " << columnSum << endl;
    }

    // (3ii) Largest Element in Each Row
    cout << "\nLargest element in each row:" << endl;
    for (int row = 0; row < SIZE; ++row)
    {
        int maxInRow = numeric_limits<int>::min(); // Initialize with smallest possible int
        for (int col = 0; col < SIZE; ++col)
        {
            if (result[row][col] > maxInRow)
            {
                maxInRow = result[row][col]; // Update max if current element is larger
            }
        }
        cout << "Row " << row << ": " << maxInRow << endl;
    }

    // Largest Element in Each Column
    cout << "\nLargest element in each column:" << endl;
    for (int col = 0; col < SIZE; ++col)
    {
        int maxInCol = numeric_limits<int>::min(); // Initialize with smallest possible int
        for (int row = 0; row < SIZE; ++row)
        {
            if (result[row][col] > maxInCol)
            {
                maxInCol = result[row][col]; // Update max if current element is larger
            }
        }
        cout << "Column " << col << ": " << maxInCol << endl;
    }

    return 0;
}
