#include <iostream>

using namespace std;

int main()
{
    int M = 4, N = 4;
    int** A = new int*[M];
    for (int i = 0; i < M; i++)
        A[i] = new int[i + 1];
    
    int k = 1; int l = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < l + 1; j++) {
            A[i][j] = k;
            k++;
        }
        l++;
    }
    l = 0; 
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < l + 1; j++) {
            cout<<A[i][j]<< " ";
        }
        l++;
        cout<<endl;
    }
 
    for (int i = 0; i < M; i++)
        delete[] A[i];

    delete[] A;
}
