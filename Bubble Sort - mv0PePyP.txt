#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void bubble_sort(int a[], int size);

int main()
{
    srand(time(NULL));
    
    int size = 5;
    int* arr = new int[5];
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
    
    cout << "Unsorted List\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    cout << "\n";
    
    bubble_sort(arr, size);
    cout << "Sorted List\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

void bubble_sort(int a[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
