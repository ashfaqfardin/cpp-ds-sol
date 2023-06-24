#include <iostream>

using namespace std;

int main()
{
    int row = 4;
    int column = 3;
    
    int arr[4][3];
    int k = 1;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            arr[i][j] = k;
            k++;
        }
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
