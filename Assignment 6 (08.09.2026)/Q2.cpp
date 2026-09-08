/*
2.	A bank wants to create a new account with initial balance. When a joint account is needed, it should copy details from existing account.
a)	Use parameterized constructor to initialize the account holder name and balance amount
b)	Implement copy constructor for joint account holder
c)	Implement a “deposit()” function to change the copied object

*/

#include <iostream>
using namespace std;

class BankAccount
{
    string name;
    float balance;

public:
    // Parameterized constructor
    BankAccount(string n, float b)
    {
        name = n;
        balance = b;
    }

    // Copy constructor
    BankAccount(const BankAccount &a)
    {
        name = a.name;
        balance = a.balance;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account1("Sayanjit", 10000);
    BankAccount account2 = account1;

    account2.deposit(5000);

    cout << "Original Account:" << endl;
    account1.display();

    cout << "\nJoint Account:" << endl;
    account2.display();

    return 0;
}
