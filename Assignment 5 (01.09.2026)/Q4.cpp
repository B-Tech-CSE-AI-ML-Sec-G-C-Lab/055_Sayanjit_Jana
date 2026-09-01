/*
4.	A college stores marks of students as private data. The examination department wants to compare the marks of two students and identify the student with the higher score. Use friend function in C++ to compare the marks of two students.
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:
    Student(string n, int m)
    {
        name = n;
        marks = m;
    }

    friend void compare(Student s1, Student s2);
};

void compare(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
        cout << s1.name << " has higher marks: " << s1.marks << endl;
    else if (s2.marks > s1.marks)
        cout << s2.name << " has higher marks: " << s2.marks << endl;
    else
        cout << "Both students have equal marks." << endl;
}

int main()
{
    Student s1("Sayan", 85);
    Student s2("Rahul", 78);

    compare(s1, s2);

    return 0;
}
