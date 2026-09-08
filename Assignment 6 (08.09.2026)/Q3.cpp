/*
3.	An online store wants to create products with ID, name, price. For creating similar product variants, it wants to copy an existing product and just change the price.
a)	Create class Product with both constructors
b)	Display the ID, name and price of the copied object before and after changing the price.

*/

#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;

public:
    Product(int i, string n, float p)
    {
        id = i;
        name = n;
        price = p;
    }

    Product(const Product &p)
    {
        id = p.id;
        name = p.name;
        price = p.price;
    }

    void setPrice(float p)
    {
        price = p;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p1(101, "Laptop", 50000);
    Product p2 = p1;

    cout << "Copied Product Before Price Change:" << endl;
    p2.display();

    p2.setPrice(55000);

    cout << "\nCopied Product After Price Change:" << endl;
    p2.display();

    return 0;
}
