#include <iostream>

using namespace std;

int main(){
    int *array1_ptr {};
    int *array2_ptr {};
    int *array_sum {};
    array1_ptr = new int[5]{1, 2, 3, 4, 5};
    array2_ptr = new int[3]{10, 20, 30};
    array_sum = new int[5*3]{};

    for (int i = 0; i<5; i++){
        for(int j = 0; j<3; j++)
            array_sum++ = array1_ptr[i] * array2_ptr[j];
    }

    cout << *array_sum;
        
    return 0;
}
