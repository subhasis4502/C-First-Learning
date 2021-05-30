#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    int balance;
    string name;
public:
    void deposit(double amount);
    void withdrawl(double amount);
    Account();
    ~Account();
};

void Account::deposit(double amount){
    balance = amount + balance;
    cout << amount << " deposited successfully from " << name << " account" << endl;
}

void Account::withdrawl(double amount){
    balance = balance - amount;
    cout << amount << " withdrawl successfully from " << name << " account" << endl;
}

Account::Account(){
    balance = 0;
    name = "Subhasis";
}


class Savings_Account: public Account
{
private:
    double int_rate;
public:
    void deposit(double amount);
    void withdrawl(double amount);
    Savings_Account();
    ~Savings_Account();
};

void Savings_Account::deposit(double amount){
    //balance = balance + amount;
    cout << amount << " deposited from savings successfully." << endl;
}

void Savings_Account::withdrawl(double amount){
    //balance = balance - amount;
    cout << amount << " withdrawl from savings successfully." << endl;
};

Savings_Account::Savings_Account(){
    int_rate = 0.04;
};


int main()
{
    Account acc;
    cout << "\nFor account: " << endl;
    acc.deposit(1000);
    acc.withdrawl(500);

    Savings_Account sav_acc;
    cout << "\nFor savings account: " << endl;
    sav_acc.deposit(2000);
    sav_acc.withdrawl(700);
    return 0;
}