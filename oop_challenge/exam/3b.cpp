/* b) Assume a class Base with a parameterized constructor and a destructor. 
Create a derived class Child inheriting the Base class having its own constructor and destructor. 
Show (with code snippet) how the constructor of the Base class is invoked through Child class. 
State in what order these constructors and destructors of the two classes are invoked. 
Discuss in this connection, the drawback of such destructor and how this drawback can be overcome. */

//Code snippet
#include <iostream>

using namespace std;

class Base
{
public:
    Base(int num_val){cout << "Base parameterized constructor called for "<< num_val << endl;}
    ~Base(){cout << "Base destructor called." << endl;}
};

class Child: public Base
{
public:
    Child (int num) : Base(num){cout << "Child constructor called for " << num << endl;}
    ~Child (){cout << "Child destructor called." << endl;}
};

int main()
{
    Child c(10);
    return 0;
}

/* Output:
Base parameterized constructor called for 10
Child constructor called for 10
Child destructor called.
Base destructor called. */

