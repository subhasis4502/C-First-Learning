#include <iostream>
#include <vector>

using namespace std;

class Move
{
private:
    int *data;
public:
    void set_data(int d){*data = d;}
    int get_data(){return *data;}
    //Constructor
    Move(int d);
    //Copy Constructor
    Move(const Move &source);
    //Move Constructor
    Move(Move &&source) noexcept;
    //Destructor
    ~Move();
};

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor called for: " << d << endl;
}

//Copy Constructor
Move::Move(const Move &source){
    data = new int;
    *data = *source.data;
    cout << "Copy constructor - Deep copy for: " << *data << endl;
}

//Move Constructor
Move::Move(Move &&source) noexcept
    :data {source.data}{
        source.data = nullptr;
        cout << "Move constructor - moving resource: " << *data << endl;
    }

Move::~Move()
{
    if (data != nullptr){
        cout << "Destructor freeing data for: " << *data << endl;
    }
    else{
        cout << "Destructor freeing data for nullptr" << endl;
    }
    delete data;
}


int main()
{
    vector<Move> vec;
    vec.push_back(Move{10});

    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{80});

    return 0;
}
