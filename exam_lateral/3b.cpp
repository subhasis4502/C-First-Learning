#include <iostream>

using namespace std;

class Sample
{
private:
    int a, b;
public:
    Sample();
    //Sample(): a{10}, b{20}{};
    void display(){cout << "a= " << a << " b= " << b << endl;}
};

Sample::Sample()
{
    a = 10;
    b = 20;
}



int main()
{
    Sample s1;
    s1.display();
    return 0;
}