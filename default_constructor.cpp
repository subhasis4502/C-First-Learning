#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;             
public:
    void set_name(string name_val){
        name = name_val;
    }
    string get_name(){
        return name;
    }
    // Player class doesn't have any constructor
    // So C++ creates a default constructor that does nothing

    // Creating a default constructor manually
    Player(){
        name = "None";
        health = 100;
        xp = 0;
    }
}; 


int main(){
    Player subhasis;
    subhasis.set_name("Subhasis");
    cout << subhasis.get_name() << endl;
    return 0;
}