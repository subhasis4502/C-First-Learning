#include <iostream>
#include <string>

using namespace std;

//Friend in non member function
class Player
{
private:
    friend void display_player(Player &p); //Non member function
    string name;
    int health;
    int xp;
public:
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    
};

Player::Player(string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val}{
    }

void display_player(Player &p) {
    cout << p.name << endl;
    cout << p.health << endl;
    cout << p.xp << endl;
} //display_player may also change private data members

int main()
{
    Player subhasis("Subhasis", 100, 95);
    display_player(subhasis);
    return 0;
}
