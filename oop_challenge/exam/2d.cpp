/* 2. d) Assume a class Sample having a static member function fun() and a non-static member function invoke(). 
Show how the fun() function can be called from the body of invoke() function and from the main() function. 
Show with the same code, how a constant data member of the class can be initialized with some value.
 */
#include<iostream>

using namespace std;
  
class Sample
{
private:
  const int x;
public:
  static void fun(){
    cout << "\nFun is called";
  };
  void invoke();
  Sample(int a) : x(a){} //Initialize constant with some value
  void show_constant(){
    cout << "\nValue of constant: " << x << endl;
  }
};

void Sample::invoke(){
  fun();
  cout << " from invoke";
}

int main(){
  Sample sample1(5);
  sample1.fun();
  sample1.invoke();
  sample1.show_constant();
  return 0;
}
