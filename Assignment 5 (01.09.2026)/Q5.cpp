/*
5.	A company stores an employee’s basic salary and bonus as private members. The payroll department needs to calculate the total salary. Use friend function in C++ to calculate and display the total salary.
*/

#include <iostream>
using namespace std;

class Employee
{
    float basicSalary, bonus;

public:
    Employee(float basic, float b)
    {
        basicSalary = basic;
        bonus = b;
    }

    friend void calculateTotal(Employee e);
};

void calculateTotal(Employee e)
{
    float total = e.basicSalary + e.bonus;

    cout << "Basic Salary: " << e.basicSalary << endl;
    cout << "Bonus: " << e.bonus << endl;
    cout << "Total Salary: " << total << endl;
}

int main()
{
    Employee e(50000, 10000);

    calculateTotal(e);

    return 0;
}
