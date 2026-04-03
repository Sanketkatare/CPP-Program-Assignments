#include <iostream>
using namespace std;

// Custom Exception Class
class LowBalanceException
{
    int balance;

public:
    LowBalanceException(int b)
    {
        balance = b;
    }

    void showError()
    {
        cout << "Exception: Low Balance! Current Balance = " << balance << endl;
    }
};

// Bank Class
class BankAccount
{
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void withdraw(int amount)
    {
        if (balance - amount < 1000)
        {
            throw LowBalanceException(balance);  // Throw custom exception
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful! Remaining balance = " << balance << endl;
        }
    }
};

// MAIN
int main()
{
    BankAccount acc(2000);

    try
    {
        acc.withdraw(1500);  // This will cause exception
    }
    catch (LowBalanceException e)
    {
        e.showError();
    }

    cout << "Program continues safely...\n";

    return 0;
}