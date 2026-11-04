/*
3.
A bank wants to develop a program to process customer withdrawals. The program should accept the account balance and withdrawal amount. If the withdrawal amount exceeds the available balance, an exception must be thrown. If the withdrawal amount is zero or negative, a different exception must be generated. Otherwise, the withdrawal should be processed successfully.

Part questions :
    a. Write a C++ program using try, throw, and catch to validate the withdrawal amount.
    b. Handle insufficient balance and invalid withdrawal amounts using separate exception handlers.
    c. Display the updated account balance when the transaction is successful.
*/

#include <iostream>
using namespace std;

int main()
{
    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawal;

    try
    {
        if (withdrawal <= 0)
        {
            throw 1;
        }
        else if (withdrawal > balance)
        {
            throw 2;
        }
        else
        {
            balance = balance - withdrawal;
            cout << "Withdrawal successful!" << endl;
            cout << "Updated account balance: " << balance << endl;
        }
    }
    catch (int e)
    {
        if (e == 1)
        {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (e == 2)
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    return 0;
}
