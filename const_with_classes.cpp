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
    string get_name() const{ //This const tells compiler this object can't change the method
        return name;
    }
    void set_name(string name_val){
        name = name_val;
    }
    //Overloaded Constructor
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int _xp_val);
};

Player::Player()
    :Player {"None", 0, 0}{}

Player::Player(string name_val)
    :Player {name_val, 0, 0}{}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{}

void display_player_name(const Player &p){
    cout << p.get_name() << endl;
}


int main()
{
    const Player villain {"Villain", 100, 55}; //Can't change any object here

    Player hero {"Hero", 100, 15};
    //villain.set_name("Super villain"); //Can't compile because of set_name is in read only mode

    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;

    display_player_name(villain); //Gives error because of const
    display_player_name(hero); //Gives the same error like previous line [fixed this in line 13]
    return 0;
}