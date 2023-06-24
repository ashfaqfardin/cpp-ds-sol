#include <iostream>

using namespace std;

void printArray(int *arr, int size){
    int *begin = arr;
    int *end = arr + size - 1;
    
    while(begin <= end){
        cout << *begin << " ";
        begin++;
    }
}
void reverseArray(int *arr, int size){
    int *begin = arr;
    int *end = arr + size - 1;
    
    while(begin <= end){
        int temp = *begin;
        *begin = *end;
        *end = temp;
        
        begin++;
        end--;
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
    printArray(arr, size);
    
    return 0;
}
