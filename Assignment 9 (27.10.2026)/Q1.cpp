/*
1.
A company calculates salaries differently for permanent and contract employees. Create an abstract class Employee with employee ID, name, and a pure virtual function calculateSalary().
•	A PermanentEmployee receives a basic salary plus HRA (20%) and DA (10%).
•	A ContractEmployee receives payment based on hours worked and the hourly rate.
Part questions
a. Define the abstract class Employee with a pure virtual function.
b. Implement calculateSalary() in both derived classes.
c. Use a base-class pointer to display the salaries of both employee types.

*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int id;
    string name;

public:
    Employee(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    virtual double calculateSalary() = 0;

    virtual void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }

    virtual ~Employee() {}
};

class PermanentEmployee : public Employee
{
private:
    double basicSalary;

public:
    PermanentEmployee(int id, string name, double basicSalary)
        : Employee(id, name)
    {
        this->basicSalary = basicSalary;
    }

    double calculateSalary() override
    {
        return basicSalary + (basicSalary * 0.20) + (basicSalary * 0.10);
    }
};

class ContractEmployee : public Employee
{
private:
    int hoursWorked;
    double hourlyRate;

public:
    ContractEmployee(int id, string name, int hoursWorked, double hourlyRate)
        : Employee(id, name)
    {
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }

    double calculateSalary() override
    {
        return hoursWorked * hourlyRate;
    }
};

int main()
{
    PermanentEmployee p(101, "Rahul", 30000);
    ContractEmployee c(102, "Amit", 160, 200);

    Employee *emp;

    emp = &p;
    emp->display();

    cout << endl;

    emp = &c;
    emp->display();

    return 0;
}
