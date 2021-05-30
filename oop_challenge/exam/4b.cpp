/* b) Suppose a class Base has a member function show(). 
Two classes Child1 and Child2 have been derived from it and override the show() function. 
Show with a suitable code how the derived class versions of the show() function can be 
invoked without the direct involvement of the derived class objects. How is this phenomenon known as?
Show how this code can be modified in the slightest possible way in order to invoke the 
Base class version of the show() function without direct involvement of the Base class object. */

#include <iostream>

using namespace std;

class Base
{
public:
    void show(){cout << "Showing the base class." << endl;}
};

class Child1: public Base
{
public:
    void show(){cout << "Showing the child 1 class." << endl;}
};

class Child2: public Base
{
public:
    void show(){cout << "Showing the child 2 class." << endl;}
};

int main()
{
    Child1 c1 = Child1();
    c1.show();
    Child2 c2 = Child2();
    c2.show();
    return 0;
}