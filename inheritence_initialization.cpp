#include <iostream>

using namespace std;

class Base
{
private:
    int value;
public:
    Base() : value{0} {cout << "Base no-arg constructor called." << endl;}
    Base(int x) : value{x} {cout << "Base int arg constructor called." << endl;}
};

class Derived: public Base
{
private:
    int double_value;
public:
    Derived() : Base{0}, double_value{0} {cout << "Derived no-arg constructor called." << endl;}
    Derived(int x) : Base{x}, double_value{x*2} {cout << "Derived int arg constructor called." << endl;}
};

int main()
{
    Base base1;
    cout << endl;
    Base base2(5);
    cout << endl;
    Derived derived1;
    cout << endl;
    Derived derived2(10);
    return 0;
}