#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
void selection_sort(int num[], int size);

int main()
{
    int size = 10;
    int* arr = new int[10];

    srand(time(NULL));
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100;
    }
    
    cout << "Unsorted List:\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    cout << "\n";
    selection_sort(arr, size);
    cout << "Sorted List:\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

void selection_sort(int num[], int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(num[j] < num[minIndex]){
                minIndex = j;
            }
        }
        
        if(minIndex != i){
            int temp = num[minIndex];
            num[minIndex] = num[i];
            num[i] = temp;
        }
    }
    

}
