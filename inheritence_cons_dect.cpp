#include <iostream>

using namespace std;

class Base
{
private:
    int value;
public:
    Base() : value{0}{cout << "\nBase no-arg constructor called.";}
    Base(int x) : value{x}{cout << "\nBase int constructor called.";}
    ~Base(){cout << "\nBase destructor called.";}
};

class Derived: public Base
{
private:
    int doubled_value;
public:
    Derived() : doubled_value{0}{cout << "\nDerived no-arg constructor called.";}
    Derived(int x) : doubled_value{x*2} {cout << "\nDerived int constructor called.";};
    ~Derived() {cout << "\nDerived destructor called.";};
};

int main()
{
    //Base base;
    //Base base2(5);
    //Derived derived;
    Derived derived2(2);
    return 0;
}