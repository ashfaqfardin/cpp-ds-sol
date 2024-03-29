#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void insertion_sort(int a[], int size);

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
    
    insertion_sort(arr, size);
    cout << "Sorted List\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

void insertion_sort(int a[], int size){
    for(int i = 1; i < size; i++){
        int key = 0;
        key = a[i];
        
        int j = 0;
        j = i - 1;
        
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key;
    }
}
