#include <iostream>

using namespace std;

#include "Account.h"

int main()
{

    Account teste(100);

    teste.displayBalance();

    teste.credit(500);

    teste.displayBalance();

    teste.debit(700);

    teste.displayBalance();

    teste.debit(600);
    
    teste.displayBalance();

    return 0;
}
