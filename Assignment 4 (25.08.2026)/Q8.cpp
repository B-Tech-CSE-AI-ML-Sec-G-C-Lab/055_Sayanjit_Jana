// Create a class “Car” and accept the details of a car for its id and price. Display the details of 2 such car objects.

#include <iostream>
using namespace std;

class Car
{
    int id;
    float price;

public:
    // Function to accept car details
    void getData()
    {
        cout << "Enter Car ID: ";
        cin >> id;

        cout << "Enter Car Price: ";
        cin >> price;
    }

    // Function to display car details
    void display()
    {
        cout << "Car ID: " << id << endl;
        cout << "Car Price: " << price << endl;
    }
};

int main()
{
    Car c1, c2;

    cout << "Enter details of Car 1:" << endl;
    c1.getData();

    cout << "\nEnter details of Car 2:" << endl;
    c2.getData();

    cout << "\nDetails of Car 1:" << endl;
    c1.display();

    cout << "\nDetails of Car 2:" << endl;
    c2.display();

    return 0;
}
