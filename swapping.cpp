#include <iostream>

using namespace std;

int swap_num(int &x, int &y){
	x = x+y;
	y = x-y;
	x = x-y;
}

int main(){
	int a = 10;
	int b = 20;
	
	cout << "The values are " << a << " & " << b << endl;
	swap_num(a, b);
	cout << "Now the values are " << a << " & " << b << endl;
	return 0;
}
