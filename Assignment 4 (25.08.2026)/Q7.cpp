#include <iostream>
using namespace std;

class Book
{
    float length, width, height;

public:
    // Function to take input
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        cout << "Enter height: ";
        cin >> height;
    }

    // Function to calculate volume
    float volume()
    {
        return length * width * height;
    }

    // Function to display volume
    void display()
    {
        cout << "Volume of the Book = " << volume();
    }
};

int main()
{
    Book b;

    b.getData();
    b.display();

    return 0;
}
