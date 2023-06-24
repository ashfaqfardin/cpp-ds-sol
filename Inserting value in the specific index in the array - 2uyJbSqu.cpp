#include <iostream>

using namespace std;

int main()
{
    int size = 10;
    int arr[10];
    
    for(int i = 0; i < 10; i++){
        arr[i] = i + 1;    
    }
    
    int index = 0;
    int value = 0;
    
    cout << "Before inserting value: \n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    cout << "Enter index number: ";
    cin >> index;
    cout << "Enter index value: ";
    cin >> value;
    
    for(int i = size-2; i >= 0; i--){
        if(i >= index){
            arr[i+1] = arr[i]; 
        }
    }
    arr[index] = value;
    
    cout << "After inserting value: \n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
