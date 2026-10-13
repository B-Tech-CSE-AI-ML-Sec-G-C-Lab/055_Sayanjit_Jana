/*
2.	A university maintains student information. Student stores personal information, Marks inherits from Student and stores marks, and Result inherits from Marks and calculates the percentage and grade.

Questions:
    a)	Create a Student class containing roll number and name.
    b)	Derive Marks from Student and store marks in three subjects.
    c)	Derive Result from Marks.
    d)	Calculate total and percentage.
    e)	Display the grade using the following rules:
    a.	Percentage ≥ 80: Grade A
    b.	Percentage ≥ 60: Grade B
    c.	Percentage ≥ 40: Grade C
    d.	Otherwise: Fail
*/

#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    int roll;
    string name;

public:
    void getStudentDetails()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Student Name: ";
        cin >> name;
    }
};

// Derived class
class Marks : public Student
{
protected:
    float m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter marks in Subject 1: ";
        cin >> m1;

        cout << "Enter marks in Subject 2: ";
        cin >> m2;

        cout << "Enter marks in Subject 3: ";
        cin >> m3;
    }
};

// Derived class
class Result : public Marks
{
private:
    float total, percentage;
    char grade;

public:
    void calculateResult()
    {
        total = m1 + m2 + m3;
        percentage = total / 3;

        if (percentage >= 80)
            grade = 'A';
        else if (percentage >= 60)
            grade = 'B';
        else if (percentage >= 40)
            grade = 'C';
        else
            grade = 'F';
    }

    void displayResult()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Student Name: " << name << endl;
        cout << "Subject 1 Marks: " << m1 << endl;
        cout << "Subject 2 Marks: " << m2 << endl;
        cout << "Subject 3 Marks: " << m3 << endl;
        cout << "Total Marks: " << total << "/300" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (grade == 'F')
            cout << "Grade: Fail" << endl;
        else
            cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Result r;

    r.getStudentDetails();
    r.getMarks();
    r.calculateResult();
    r.displayResult();

    return 0;
}
