using namespace std;

class Account
{
    private: 
        int accountBalance; //saldo
    public:
        Account (int); //construtor que recebe um saldo
        void setBalance(int); 
        int getBalance();
        void credit(int);
        void debit(int);
        void displayBalance();
};