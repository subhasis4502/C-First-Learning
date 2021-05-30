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
    string get_name(){ return name; }
    int get_health(){ return health; }
    int get_xp(){ return xp; }
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    //Copy Constructor
    Player(const Player &source);
    //Destructor
    ~Player(){
        cout << "Destructor is called for: " << name <<endl;
    }
};

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val} {
        cout << "Three agrs are called for " << name << endl;
    }

Player::Player(const Player &source)
    :name(source.name), health(source.health), xp(source.xp){
        cout << "Copy constructor - made copy of: " << source.name << endl;
    }

void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main(){
    Player enemy;
    display_player(enemy);

    Player subhasis("Subhasis Das");
    Player rono("Rono", 100, 50);
    Player new_rono {rono};
    display_player(rono);

    Player me("Me", 98);
    return 0;
}