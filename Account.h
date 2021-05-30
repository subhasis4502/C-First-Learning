#include <iostream>

using namespace std;

class Account {
private:
    double balance;
public:
    void set_balance(double bal); //Prototyping
    double get_balance();
};

//Member methods declaration
void Account::set_balance(double bal){
    balance = bal;
}
double Account::get_balance(){
    return balance;
}

