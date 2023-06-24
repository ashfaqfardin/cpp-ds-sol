#include <iostream>

using namespace std;

int main()
{
    int row = 3;
    int column = 3;
    
    int matrix_A[3][3];
    int matrix_B[3][3];
    
    //taking inputs
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix_A[i][j] = i + j + 1;
            matrix_B[i][j] = i + j + 2;
        }
    }
    cout << "MATRIX A: \n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << matrix_A[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "MATRIX B: \n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << matrix_B[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Sum of Two Matrix:\n";
    int matrix_C[3][3];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
            cout << matrix_C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
