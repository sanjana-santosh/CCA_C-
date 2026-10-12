#include <iostream>
using namespace std;

class Bank
{
private:
    int balance;

public:
    void setBalance(int b)
    {
     balance=b;
    }

    void deposit(int amount)
    {
     balance=balance+amount;
    }

    void display()
    {
     cout<<"Total Balance:"<<balance<<endl;
    }
};

int main()
{
    Bank b;

    int balance, amount;

    cout<<"Enter Initial Balance:";
    cin>>balance;

    b.setBalance(balance);

    cout<<"Enter Deposit Amount:";
    cin>>amount;

    b.deposit(amount);
    b.display();

    return 0;
}//encapsulation program
