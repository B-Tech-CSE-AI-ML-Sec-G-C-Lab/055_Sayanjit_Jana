// Create a class “Student”. Take user input for roll number and marks of 5 subjects of a student. Display the total marks of the student using member functions.

#include <iostream>
using namespace std;

class Student
{
    int roll, marks[5];

public:
    // Function to accept student details
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    // Function to calculate total marks
    int totalMarks()
    {
        int total = 0;

        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        return total;
    }

    // Function to display details
    void display()
    {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Total Marks: " << totalMarks() << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.display();

    return 0;
}
