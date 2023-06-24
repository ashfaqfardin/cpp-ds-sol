#include <iostream>

using namespace std;

void arraySum(int *arr, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    cout << sum;
}

int main()
{
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    
    cout << "Sum of the elements: ";
    arraySum(arr, size);
    cout << endl;
    
    cout << "Sum of the elements: ";
    arraySum(&arr[0], size);

    return 0;
}
