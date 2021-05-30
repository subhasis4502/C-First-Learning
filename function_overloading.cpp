#include <iostream>
#include <string>

using namespace std;

void print(int val){
	cout << "The integer value is: " << val << endl;
}

void print(double val){
	cout << "The double value is: " << val << endl;
}

void print(string val){
	cout << "The string value is: " << val << endl;
}

int main()
{
	print(5);
	print(5.19);
	print("Hello");
	
	return 0;
}
