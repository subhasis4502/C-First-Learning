/* d) Distinguish between early binding and late binding with suitable example of code snippets.  */

/* Early Binding (compile-time time polymorphism) As the name indicates, 
compiler (or linker) directly associate an address to the function call. 
It replaces the call with a machine language instruction that tells the 
mainframe to leap to the address of the function.
By default early binding happens in C++. 
Late binding (discussed below) is achieved with the help of virtual keyword) */

/* //Code Snippet: Early Binding
#include<iostream>

using namespace std;
    
class Base
{
public:
    void show() { cout<<"In Base class.\n"; }
};
    
class Derived: public Base
{
public:
    void show() { cout<<"In Derived class.\n"; }
};
    
int main(void)
{
    Base *bp = new Derived;
    bp->show();  
  
    return 0;
}

//Output: In Base class. */

/* Late Binding : (Run time polymorphism) In this, the compiler adds code that identifies 
the kind of object at runtime then matches the call with the right function definition. 
This can be achieved by declaring a virtual function. */

//Code Snippet: Late Binding
#include<iostream>

using namespace std;
    
class Base
{
public:
    virtual void show() { cout<<" In Base class."; }
};
    
class Derived: public Base
{
public:
    void show() { cout<<"In Derived class."; }
};
    
int main(void)
{
    Base *bp = new Derived;
    bp->show();

    return 0;
}

//Output: In Derived class.