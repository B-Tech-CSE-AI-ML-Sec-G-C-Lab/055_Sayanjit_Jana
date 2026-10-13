/*
5.	A university has a general Person class. Student and Employee both inherit from Person. A TeachingAssistant is both a student and an employee. This creates a hybrid inheritance structure and demonstrates the diamond problem.

Questions:
    a)	Create a Person class containing name.
    b)	Derive Student and Employee from Person.
    c)	Derive TeachingAssistant from both Student and Employee.
    d)	Identify the ambiguity caused by multiple copies of Person.
    e)	Solve the ambiguity using virtual inheritance.
*/

#include <iostream>
using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayName()
    {
        cout << "Name: " << name << endl;
    }
};

// Derived class 1
class Student : virtual public Person
{
public:
    void study()
    {
        cout << "Role: Student" << endl;
    }
};

// Derived class 2
class Employee : virtual public Person
{
public:
    void work()
    {
        cout << "Role: Employee" << endl;
    }
};

// Derived class 3
class TeachingAssistant : public Student, public Employee
{
public:
    void displayDetails()
    {
        displayName();
        study();
        work();
    }
};

int main()
{
    TeachingAssistant ta;

    ta.getName();
    ta.displayDetails();

    return 0;
}
