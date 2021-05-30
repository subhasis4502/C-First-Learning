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
    //Constructor with default parameter values
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
};

int main(){
    Player enemy;
    Player subhasis("Subhasis Das");
    Player rono("Rono", 100, 50);
    Player me("Me", 98); //We doesn't have this constructor still it works
    return 0;
}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three agrs are called for " << name << endl;
    }