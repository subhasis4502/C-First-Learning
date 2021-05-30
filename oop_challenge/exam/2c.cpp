#include <iostream>

using namespace std;

class Number
{
private:
    int num;
public:
    Number();
    Number(int n);
    Number(Number &n);
    static void show(){cout << "Within show method";}
    friend int sum(Number n){return (num + n.num);}
    int add(Number n){return (num + n.num);}
};

int main()
{
    Number n1;
    Number n2(10);
    n1.num=20;
    Number n3(n2);
    show();
    cout << n2.sum(n1);
    cout << n3.add(n2);
    return 0;
}