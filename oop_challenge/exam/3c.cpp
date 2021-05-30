/* c) Assume a class Base having a protected data member num and the pre-increment (++) operator overloaded 
function. 
From this class, a class Child has been inherited in public mode with the post-decrement (--) operator 
overloaded function. 
Now show how these operator overloaded functions are invoked through the Child class object. 
Assume both the pre-increment and post-decrement operator overloaded functions to be constant member functions. 
By setting the initial value of the data member to 10 through Child class constructor, 
discuss the output of the program according to the sequence in which the function call statements appear in 
the main() method.*/

#include <iostream>

using namespace std;

class Base
{
protected:
	int num;
public:
	Base(int num = 0)
	{
		this->num = num;
	}
	Base operator++()
	{
		Base temp;
		temp.num = ++num;
		return temp;
	}
	void display()
	{
		cout << "num = " << num << endl;
	}
};

class Child: public Base
{
public:
	Child(int input): Base(input){};
	Child operator--()
	{
		Child temp1;
		temp1.num = num--;
		return temp1;
	}
	void display()
	{
		cout << "num = " << num << endl;
	}
};

int main()
{
	Base b1(10);
	b1.display();

	/* Child c1(20);
	c1.display(); */
	return 0;
}
