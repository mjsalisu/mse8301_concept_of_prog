#include <iostream>
#include <string>
using namespace std;

/*
    Slide 32
    (a) Write the implementation of the following class diagram, and implement all the member functions.
    (b) Create a function "display" that takes a student object and display its information using
    accessor functions.
    (c) In the main function, create two objects of the class, and use the mutator functions to initialize
    the member variable for each object.
    (d) Call the "display" function for each object to show the information for each student.
*/

class Student
{
private:
    string firstName;
    string lastName;
    int level;
    float CGPA;

public:
    // Mutator functions (setters)
    void setFirstName(string fName)
    {
        firstName = fName;
    }

    void setLastName(string lName)
    {
        lastName = lName;
    }

    void setLevel(int lev)
    {
        level = lev;
    }

    void setCGPA(float cgpa)
    {
        CGPA = cgpa;
    }

    // Accessor functions (getters)
    string getFirstName() const
    {
        return firstName;
    }

    string getLastName() const
    {
        return lastName;
    }

    int getLevel() const
    {
        return level;
    }

    float getCGPA() const
    {
        return CGPA;
    }
};

// Function to display student information
void display(const Student &student)
{
    cout << "Student Information:" << endl;
    cout << "First Name: " << student.getFirstName() << endl;
    cout << "Last Name: " << student.getLastName() << endl;
    cout << "Level: " << student.getLevel() << endl;
    cout << "CGPA: " << student.getCGPA() << endl;
    cout << "------------------------" << endl;
}

int main()
{
    // Create two Student objects
    Student student1, student2;

    // Initialize member variables using mutator functions
    student1.setFirstName("Jamilu");
    student1.setLastName("Salisu");
    student1.setLevel(800);
    student1.setCGPA(3.75);

    student2.setFirstName("Zoya");
    student2.setLastName("Ibrahim");
    student2.setLevel(400);
    student2.setCGPA(4.85);

    // Display information for each student
    display(student1);
    display(student2);

    return 0;
}
