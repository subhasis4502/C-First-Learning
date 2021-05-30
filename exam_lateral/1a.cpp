#include <iostream>

using namespace std;

void swap(int &x, int &y){
    x = x + y;
    y = x - y;
    x = x - y;
}

int main()
{
    int a{10}, b{20};

    swap(a, b);
    cout << "a= " << a << "\nb= " << b <<endl;
    return 0;
}