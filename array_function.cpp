#include <iostream>

using namespace std;

void print_array(int array[], int size){
	cout << "[";
	for (int i =0; i < size; i++)
		cout << array[i] << "\t";
	cout << "]\n";
}

void print_value_array(int array[], int size, int val){
	cout << "[";
	for (int i =0; i < size; i++)
		cout << val << " ";
	cout << "]\n";
}

int main(){
	int scores[5]{90, 91, 92, 93, 94};
	print_array(scores, 5);
	print_value_array(scores, 10, 100);
	print_array(scores, 5);
	
	return 0;
}
