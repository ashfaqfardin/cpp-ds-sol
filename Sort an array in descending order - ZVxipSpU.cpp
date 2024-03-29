#include <iostream>
using namespace std;

void sortDescending(int sort_desc[], int size){
    for(int i = 0 ; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(sort_desc[j] < sort_desc[j+1]){
                int empty = sort_desc[j];
                sort_desc[j] = sort_desc[j+1];
                sort_desc[j+1] = empty;
            }
        }
    }
}

int main(){
    
    int numbers[5];
    cout << "Enter five random integers: ";
    for(int i = 0; i < 5; i++){
        cin >> numbers[i];
    }
    
    sortDescending(numbers, 5);
    
    cout << "Array in Descending Order: ";
    for(int i = 0; i < 5; i++){
        cout << numbers[i] << " ";
    }
    
    return 0;
}
