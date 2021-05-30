#include <iostream>
#include "Account.h" // Include local header files

/* using namespace std;

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
} */

int main(){
    Account subhasis;
    subhasis.set_balance(5000);
    cout << "My balance is : " << subhasis.get_balance() << endl;
    return 0;
}