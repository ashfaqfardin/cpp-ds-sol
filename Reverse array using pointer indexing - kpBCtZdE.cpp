#include <iostream>

using namespace std;

void printArray(int *pointer, int size){
    for(int i = 0; i < size; i++){
        cout << pointer[i] << " ";
    }
}
void reverseArray(int *pointer, int size){
    for(int i = size-1; i >= 0; i--){
        cout << pointer[i] << " ";
    }
}

int main()
{
    int size = 5;
    int arr[] = {1, 2, 3, 4, 5};
    
    cout << "Original Form: ";
    printArray(arr, size);
    
    cout << endl;
    cout << "Reversed Form: ";
    reverseArray(arr, size);
    
    return 0;
}
