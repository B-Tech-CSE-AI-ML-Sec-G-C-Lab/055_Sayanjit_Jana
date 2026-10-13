/*
1.	A company stores basic employee information such as employee ID and name. A Salary class inherits this information and calculates the employee's gross salary from basic salary and allowances.

Questions:
    a)	Define a base class Employee with id and name.
    b)	Derive a class Salary containing basic, HRA, and DA.
    c)	Create a function to calculate gross salary.
    d)	Accept employee details and display the complete salary information.
    e)	Explain how inheritance reduces code duplication

*/

#include <iostream>
using namespace std;

// Base class
class Employee
{
protected:
    int id;
    string name;

public:
    void getEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;
    }
};

// Derived class
class Salary : public Employee
{
private:
    float basic, HRA, DA, gross;

public:
    void getSalaryDetails()
    {
        cout << "Enter Basic Salary: ";
        cin >> basic;

        cout << "Enter HRA: ";
        cin >> HRA;

        cout << "Enter DA: ";
        cin >> DA;
    }

    void calculateGrossSalary()
    {
        gross = basic + HRA + DA;
    }

    void displayDetails()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main()
{
    Salary s;

    s.getEmployeeDetails();
    s.getSalaryDetails();
    s.calculateGrossSalary();
    s.displayDetails();

    return 0;
}
