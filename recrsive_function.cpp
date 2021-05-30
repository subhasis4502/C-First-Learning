#include <iostream>

using namespace std;

long long int fact(int n){
	if (n==0)
		return 1;
	return n*fact(n-1);
}

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	
	cout << "The factorial of " << num << " is " << fact(num) << endl; 
	return 0;
}
