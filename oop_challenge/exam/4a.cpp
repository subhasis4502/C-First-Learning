/* 4. a) What kind of inheritance does the following diagram indicate?
Suppose the class A has a parameterized and a default constructor. 
Each of the two derived classes B and C have their own parameterized constructors, 
Show (with code snippet and output) how the parameterized constructor of class A 
can be invoked through the object of class D. Hence in this connection, 
discuss the drawback of such type of inheritance. Explain (with code and output) 
how this drawback can be overcome. */

//Code Snippet
/* #include <iostream>

using namespace std;

class A
{
public:
    A(){cout << "A Default constructor called." << endl;};
    A(int num_val_a){cout << "A Parameterized constructor called for "<< num_val_a << endl;}
    ~A(){cout << "A Destructor called." << endl;}
};

class B: public A
{
public:
    B(int num_val_b) : A(num_val_b){cout << "B Parameterized constructor called for "<< num_val_b << endl;};
    ~B(){cout << "B Destructor called." << endl;};
};

class C: public A
{
public:
    C(int num_val_c) : A(num_val_c){cout << "C Parameterized constructor called for "<< num_val_c << endl;};
    ~C(){cout << "C Destructor called." << endl;};
};

class D: public B, public C
{
public:
    D(int num_val_d) : B(num_val_d), C(num_val_d){cout << "D Parameterized constructor called for "<< num_val_d << endl;};
    ~D(){cout << "D Destructor called." << endl;};
};

int main()
{
    D d2(10);
    return 0;
} */

/* Output:
A Parameterized constructor called for 10
B Parameterized constructor called for 10
A Parameterized constructor called for 10
C Parameterized constructor called for 10
D Parameterized constructor called for 10
D Destructor called.
C Destructor called.
A Destructor called.
B Destructor called.
A Destructor called. */

//Drawback: Diamond problem
/*In the above program, constructor of 'A' is called two times. 
Destructor of 'A' will also be called two times when object 'd1' is destructed. 
So object 'd1' has two copies of all members of 'A', this causes ambiguities.*/

/* Solution: The solution to this problem is ‘virtual’ keyword. 
We make the classes 'B' and 'C' as virtual base classes 
to avoid two copies of 'A' in 'D' class. */

//Resolved code:
#include <iostream>

using namespace std;

class A
{
public:
    A(){cout << "A Default constructor called." << endl;};
    A(int num_val_a){cout << "A Parameterized constructor called for "<< num_val_a << endl;}
    ~A(){cout << "A Destructor called." << endl;}
};

class B: virtual public A
{
public:
    B(int num_val_b) : A(num_val_b){cout << "B Parameterized constructor called for "<< num_val_b << endl;};
    ~B(){cout << "B Destructor called." << endl;};
};

class C: virtual public A
{
public:
    C(int num_val_c) : A(num_val_c){cout << "C Parameterized constructor called for "<< num_val_c << endl;};
    ~C(){cout << "C Destructor called." << endl;};
};

class D: public B, public C
{
public:
    D(int num_val_d) : B(num_val_d), C(num_val_d){cout << "D Parameterized constructor called for "<< num_val_d << endl;};
    ~D(){cout << "D Destructor called." << endl;};
};

int main()
{
    D d2(10);
    return 0;
}

/* Output:
A Default constructor called.
B Parameterized constructor called for 10
C Parameterized constructor called for 10
D Parameterized constructor called for 10
D Destructor called.
C Destructor called.
B Destructor called.
A Destructor called.*/