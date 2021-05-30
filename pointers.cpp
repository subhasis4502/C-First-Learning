#include<iostream>

using namespace std;

/*int main()
{
    int num{5};
    int *ptr=&num;

    cout << "The value is: " << num << endl;
    cout << "The address is: " << &num << endl;
    
    cout << "\nThe value of pointer is: " << ptr << endl;
    cout << "The address of pointer is: " << &ptr << endl;
    cout << "The value the pointer locates is: " << *ptr << endl;
    return 0;
}*/

/*int main(){
	int num[5] {1, 6, 3, 4, -1};
	int *num_ptr(num);
	while (*num_ptr != -1){
		cout << *num_ptr++ << endl;
	}
	
	return 0;
}*/

/*int main(){
	int num1 = 6;
	int num2 = 9;

//Pointers to constants:	
	const int *num_ptr1 = &num1;
	//*num_ptr = 5; //error
	num_ptr1 = &num2;
	
//Constant pointers:
	int *const num_ptr2 = &num1;
	*num_ptr2 = 5; 
	//num_ptr2 = &num2; //error
	
//Constant pointers to constants
	int *const num_ptr3 = &num1;
	//*num_ptr3 = 5; //error
	//num_ptr3 = &num2; //error
}*/

void sum(int *ptr, int val){
	int sum = 0;
	do{
		sum += *ptr++;
	}
	while (*ptr != 5);
	cout << sum << endl;
}

int main(){
	int arr[5]{9, 8, 7, 6, 5};
	int *arr_ptr{arr};
	sum(arr_ptr, 5);
	return 0;
}
