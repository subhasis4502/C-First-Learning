#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    string name;
    double balance;
public:
    void set_name(string name_val){
        name = name_val;
    }
    // Constructors
    Account(){
        cout << "No arguments passed!" << endl;
    };
    Account(string name_val, double balance_val){
        name = name_val;
        balance = balance_val;
        cout << "Name: " << name << " & Balance: " << balance << endl;
    };
    Account(string name_val){
        name = name_val;
        cout << "Name: " << name << endl;
    };
    Account(double balance_val){
        balance = balance_val;
        cout << "Balance: " << balance << endl;
    };
    // Destructors
    ~Account(){
        cout << "Destructor called for " << name << endl;
    };
};

int main(){
    {
        Account ram;
        ram.set_name("Ram");
    }
    {
        Account subhasis(5000);
        subhasis.set_name("Subhasis");
        Account hero("Hero");
        hero.set_name("Hero");
        Account enemy("Enemy", 100000);
        enemy.set_name("Enemy");
    }
    {
        Account *rono = new Account;
        rono->set_name("Rono");
        Account *villain = new Account("Villain", 20000);
        villain->set_name("Villain");

        delete rono;
        delete villain;
    }
    return 0;
}