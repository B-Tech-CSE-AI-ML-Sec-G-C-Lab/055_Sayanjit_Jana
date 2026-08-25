// Create a class “Employee”. Take user input for salary and allowance of 3 employees and display these using array of objects.

#include <iostream>
using namespace std;

class Employee
{
    float salary, allowance;

public:
    // Function to accept employee details
    void getData()
    {
        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Enter Allowance: ";
        cin >> allowance;
    }

    // Function to display employee details
    void display()
    {
        cout << "Salary: " << salary << endl;
        cout << "Allowance: " << allowance << endl;
    }
};

int main()
{
    Employee emp[3];

    // Input details of 3 employees
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << ":" << endl;
        emp[i].getData();
    }

    // Display details of 3 employees
    cout << "\nEmployee Details:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << ":" << endl;
        emp[i].display();
    }

    return 0;
}
