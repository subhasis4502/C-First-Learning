#include <iostream>

using namespace std;

class ABC
{
private:
    int data;
public:
    ABC();
    int get_data_abc(){return data;};
    void set_data_abc(int val){data = val;}
};

ABC::ABC()
{
    data = 10;
}

class XYZ
{
private:
    int data;
public:
    XYZ();
    int get_data_xyz(){return data;};
    void set_data_xyz(int val){data = val;}
};

XYZ::XYZ()
{
    data = 20;
}

void swap_class(ABC &a, XYZ &x){
    int temp1, temp2;
    temp1 = a.get_data_abc();
    temp2 = x.get_data_xyz();
    a.set_data_abc(temp2);
    x.set_data_xyz(temp1);
}

int main(){
    ABC a;
    XYZ x;

    cout << "ABC a: " << a.get_data_abc() << endl;
    cout << "XYZ x: " << x.get_data_xyz() << endl << endl;

    swap_class(a, x);
    cout << "After swapping:\n";
    cout << "ABC a: " << a.get_data_abc() << endl;
    cout << "XYZ x: " << x.get_data_xyz() << endl;
    return 0;
}