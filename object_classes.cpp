#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
    //attribute
    string name;
    int health;
    int xp;

    //methods
    void talk(string);
    bool is_dead();
};

class Account{
public:
    string name;
    double balance;
    
    bool deposit(double bal){
            balance += bal;
            cout << bal << " deposited successfully in " << name << " account." << endl;
        };
    bool withdrawl(double bal){
        balance -= bal;
        cout << bal << " withdrawl successfully from " << name << " account." << endl;
    };
};

int main()
{
    Account subhasis;
    subhasis.name = "Subhasis Das";
    subhasis.balance = 0;
    int option{1}, money{0};
    
    while (option != 0){
        cout << "1- Deposit\n2- Withdraw\n3- Balance\n0-Exit\nSelect your option: ";
        cin >> option;
        if (option == 1){
            cout << "Amount to deposit: ";
            cin >> money;
            subhasis.deposit(money);
        }
        else if (option == 2){
            cout << "Amount to withdraw: ";
            cin >> money;
            subhasis.withdrawl(money);
        }
        else if(option == 3){
            cout << "The last balance is: " << subhasis.balance << endl;
        }
        else
            cout << "Thank you!" << endl;
    }
    
    return 0;
}