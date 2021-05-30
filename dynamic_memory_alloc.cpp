#include <iostream>

using namespace std;

/*int main(){
	int *array_ptr {};
	int size{5};
	
	array_ptr = new int[size];
	return 0;
}*/

//Different ways to call an pointer or array in c++
int main(){
	int arr[5]{100, 95, 90, 85, 80};
	int *arr_ptr{arr};
	
	cout << arr[1] << endl;
	cout << arr_ptr[1] << endl;
	cout << *(arr_ptr + 1)<< endl;
	cout << *(arr + 1)<< endl;
	return 0;
}
