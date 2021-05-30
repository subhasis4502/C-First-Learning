/* 
3. a)Consider a class Sample having a constructor that takes two parameters. 
Show 2 ways of supplying default parameter values in the constructor. 
Also show on creating objects, how they can be invoked.
*/

#include <iostream>

using namespace std;

class Sample
{
private:
    int val1;
    int val2;
public:
    Sample(); //1st Way
    Sample(int a = 0, int b = 0); //2nd Way
    void show_val(){
        cout << "Val1: " << val1 << "\nVal2: " << val2 << endl;
    }
};

//1st way
Sample::Sample(){
    val1 = 0;
    val2 = 0;
}

//2nd Way
Sample::Sample(int a, int b)
    : val1{a}, val2{b} {}

int main()
{
    Sample sample1;
    sample1.show_val();
    return 0;
}