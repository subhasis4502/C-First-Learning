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
    //Overloaded Constructor
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

int main(){
    Player enemy;
    Player subhasis("Subhasis Das");
    Player rono("Rono", 100, 50);
    return 0;
}

//Unefficient way
/* Player::Player(){
    name = "None"; //Assignment not Initialization
    health = 0;
    xp = 0;
} */

//Efficient way
//Player::Player(): name{"None"}, health{0}, xp{0}{}

/* Player::Player(string name_val){
    name = name_val;
    health = 0;
    xp = 0;
} */

//Efficient way
//Player::Player(string name_val): name{name_val}, health{0}, xp{0}{}

/* Player::Player(string name_val, int health_val, int xp_val){
    name = name_val;
    health = health_val;
    xp = xp_val;
} */

//Efficient way
//Player::Player(string name_val, int health_val, int xp_val): name{name_val}, health{health_val}, xp{xp_val}{}

//Rather than using initilization over and over again we use DELEGATING CONSTRUCTORS
Player::Player(string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp{xp_val}{
    cout << "Three agrs are called." << endl;
}
Player::Player()
: Player{"None", 0, 0} {
    cout << "No agrs are called." << endl;
}

Player::Player(string name_val)
: Player{name_val, 0, 0} {
    cout << "One agr is called." << endl;
}