/*
2.
	A vehicle rental company charges different rental fees depending on the vehicle type.
•	Car: rental cost = number of days × ₹2,000.
•	Bike: rental cost = number of days × ₹800.
•	Truck: rental cost = number of days × ₹5,000, plus a fixed service charge of ₹1,000.
Create an abstract class Vehicle with a pure virtual function calculateRent(int days) and a virtual function displayType().
Part questions
a. Implement the abstract class and its derived classes.
b. Override calculateRent() for each vehicle type.
c. Display the rental cost for 3 days using base-class pointers.

*/

#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual int calculateRent(int days) = 0;

    virtual void displayType()
    {
        cout << "Vehicle Type" << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
public:
    int calculateRent(int days) override
    {
        return days * 2000;
    }

    void displayType() override
    {
        cout << "Vehicle Type: Car" << endl;
    }
};

class Bike : public Vehicle
{
public:
    int calculateRent(int days) override
    {
        return days * 800;
    }

    void displayType() override
    {
        cout << "Vehicle Type: Bike" << endl;
    }
};

class Truck : public Vehicle
{
public:
    int calculateRent(int days) override
    {
        return days * 5000 + 1000;
    }

    void displayType() override
    {
        cout << "Vehicle Type: Truck" << endl;
    }
};

int main()
{
    Car car;
    Bike bike;
    Truck truck;

    Vehicle *v;

    v = &car;
    v->displayType();
    cout << "Rental Cost for 3 Days: Rs. " << v->calculateRent(3) << endl;

    cout << endl;

    v = &bike;
    v->displayType();
    cout << "Rental Cost for 3 Days: Rs. " << v->calculateRent(3) << endl;

    cout << endl;

    v = &truck;
    v->displayType();
    cout << "Rental Cost for 3 Days: Rs. " << v->calculateRent(3) << endl;

    return 0;
}
