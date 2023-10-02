#include <iostream>

using namespace std;

#include "Account.h"

Account::Account(int balance)
{
    setBalance(balance);
}

void Account::setBalance(int balance)
{
    if(balance < 0)
    {
        accountBalance = 0;
        cout << "Value entered is invalid, account created with zero balance" << endl;
    } else
    {
        accountBalance = balance;
    }
}

int Account::getBalance()
{
    return accountBalance;
}

void Account::credit(int increaseBalance)
{
    int newBalance = 0;

    newBalance = getBalance() + increaseBalance;

    setBalance(newBalance);
}

void Account::displayBalance()
{
    cout << "Balance: " << getBalance() << "$" << endl;
}

void Account::debit(int decreaseBalance)
{
    int newBalance = 0;

    newBalance = getBalance() - decreaseBalance;

    if(newBalance >= 0)
    {
        setBalance(newBalance);
    } else
    {
        cout << "Debit amount exceeded account balance." << endl;
    }
}

