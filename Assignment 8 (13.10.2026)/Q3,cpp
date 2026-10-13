/*
3.	A bank maintains common customer information. Account stores account number and customer name. Two classes, SavingsAccount and CurrentAccount, inherit from Account and implement different interest/transaction rules.

Questions:
    a)	Create a base class Account.
    b)	Derive SavingsAccount and CurrentAccount.
    c)	In SavingsAccount, calculate interest at 5%.
    d)	In CurrentAccount, calculate a transaction charge of ₹100.
    e)	Display the details for both account types.
*/

#include <iostream>
using namespace std;

// Base class
class Account
{
protected:
    int accountNo;
    string name;

public:
    void getDetails()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;

        cout << "Enter Customer Name: ";
        cin >> name;
    }

    void displayDetails()
    {
        cout << "Account Number: " << accountNo << endl;
        cout << "Customer Name: " << name << endl;
    }
};

// Derived class 1
class SavingsAccount : public Account
{
private:
    float balance, interest;

public:
    void getSavingsDetails()
    {
        getDetails();

        cout << "Enter Savings Balance: ";
        cin >> balance;

        interest = balance * 5 / 100;
    }

    void displaySavingsDetails()
    {
        cout << "\n--- Savings Account Details ---" << endl;
        displayDetails();
        cout << "Balance: Rs. " << balance << endl;
        cout << "Interest (5%): Rs. " << interest << endl;
        cout << "Balance After Interest: Rs. "
             << balance + interest << endl;
    }
};

// Derived class 2
class CurrentAccount : public Account
{
private:
    float balance, charge;

public:
    void getCurrentDetails()
    {
        getDetails();

        cout << "Enter Current Balance: ";
        cin >> balance;

        charge = 100;
    }

    void displayCurrentDetails()
    {
        cout << "\n--- Current Account Details ---" << endl;
        displayDetails();
        cout << "Balance: Rs. " << balance << endl;
        cout << "Transaction Charge: Rs. " << charge << endl;
        cout << "Balance After Charge: Rs. "
             << balance - charge << endl;
    }
};

int main()
{
    SavingsAccount s;
    CurrentAccount c;

    cout << "--- Enter Savings Account Information ---"
         << endl;
    s.getSavingsDetails();

    cout << "\n--- Enter Current Account Information ---"
         << endl;
    c.getCurrentDetails();

    s.displaySavingsDetails();
    c.displayCurrentDetails();

    return 0;
}
