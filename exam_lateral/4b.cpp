/*Assume a class Sample having a static member function fun() and a non-static member function invoke(). Show
with a code snippet, how the fun() and invoke() functions can be called from the main() function. With that same
code, show how a constant data member of the class can be initialized with some value. */

#include<iostream>

using namespace std;
  
class Sample
{
private:
  const int x;
public:
  static void fun(){cout << "Fun is called" << endl;}
  void invoke(){cout << "Invoke is called" << endl;}
  Sample(int a) : x(a){} //Initialize constant with some value
  void show_constant(){
    cout << "Value of constant: " << x << endl;
  }
};

int main(){
  Sample sample1(5);
  sample1.fun();
  sample1.invoke();
  sample1.show_constant();
  return 0;
}