#include <iostream>
#include <string>

using namespace std;

class Shallow
{
private:
    int *data;
public:
    void set_data(int d){ *data = d;}
    int get_data(){ return *data; }
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){
        cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s){
    cout << s.get_data() << endl;
}

int main(){
    Shallow obj1{100};
    display_shallow(obj1);

    Shallow obj2  {obj1};
    obj2.set_data(1000);
    /* As this is a shaliow copy so both the object obj1 and obj2 pointing to the 
    same address,  so if we change the data for obj2 it will change data for obj1 as well */
    display_shallow(obj1);
    display_shallow(obj2);
    return 0;
}