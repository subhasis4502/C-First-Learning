/* c) Suppose two classes Basel and Base2 have a public member function display() each within them. 
A Child class has been inherited from these two classes. Show (with proper code) how the Base2 class 
version of the display() function can be invoked through the Child class object. What type of 
inheritance does it refer? */

#include <iostream>

using namespace std;

class Base1
{
public:
    void display(){cout << "Displaying the base 1 class." << endl;}
};

class Base2
{
public:
    void display(){cout << "Displaying the base 2 class." << endl;}
};

class Child: public Base1, public Base2{
public:
    void display(){Base2::display();}
};

int main()
{
    Child c;
    c.display();
    return 0;
}

//Output: Displaying the base 2 class.

//This is multiple inheritence with ambiguity