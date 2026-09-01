/*
Create a class Car with model and price. Use parameterized constructor to initialize them. Use a static variable totalCars to count how many Car objects are created. Also add a static function showTotal().
*/

#include <iostream>
using namespace std;

class Car
{
    string model;
    float price;

    static int totalCars;

public:
    // Parameterized constructor
    Car(string m, float p)
    {
        model = m;
        price = p;
        totalCars++;
    }

    // Function to display car details
    void display()
    {
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }

    // Static function
    static void showTotal()
    {
        cout << "Total Cars: " << totalCars << endl;
    }
};

// Definition of static variable
int Car::totalCars = 0;

int main()
{
    Car c1("BMW", 500000);
    Car c2("Audi", 600000);
    Car c3("Mercedes", 800000);

    c1.display();
    c2.display();
    c3.display();

    Car::showTotal();

    return 0;
}
