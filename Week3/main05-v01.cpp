#include <iostream>

using namespace std;

class BankAccount
{
    private:
        float balance = 0;
    public:
        float getBalance(void);
        void deposit(float);
        void withdraw(float);
};

float BankAccount::getBalance(void)
{
    return balance;
}

void BankAccount::deposit(float amount)
{
    if (amount <= 0)
    {
        cout << "Amount can't be zero or negative." << endl;
        return;
    }

    balance += amount;
    cout << "Operation successful." << endl;
}

void BankAccount::withdraw(float amount)
{
    if (amount <= 0)
    {
        cout << "Amount can't be zero or negative." << endl;
        return;
    }

    if (amount > balance)
    {
        cout << "Can't withdraw from account, not enough money." << endl;
    }
    else
    {
        balance -= amount;
        cout << "Operation successful." << endl;
    }
}

int main(void)
{
    BankAccount acc;
    char op;
    float amount;

    cout << "Account created with 0 balance." << endl;

    do
    {
        cout << "Enter operation (B)alance, (D)eposit, (W)ithdraw, (Q)uit: ";
        cin >> op;

        switch (op)
        {
            case 'B':
                cout << "Balance: " << acc.getBalance() << endl;
                break;
            case 'D':
                cout << "Input amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 'W':
                cout << "Input amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 'Q':
                cout << "Exiting from account..." << endl;
                break;
            default:
                cout << "Please Input a valid operation." << endl;
                break;
        }
    }
    while (op != 'Q');

    return 0;
}
