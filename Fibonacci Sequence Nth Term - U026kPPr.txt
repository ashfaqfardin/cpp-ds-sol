#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    
    int fib1 = 0;
    int fib2 = 1;
    int nextNum = 0;
    
    // if N = 10, print N numbers of fib
    for(int i = 1; i <= N; i++){
        if(i == 1){
            cout << fib1 << " ";
            continue; // to increase the value of i after printing
        }
        if(i == 2){
            cout << fib2 << " ";
            continue; // to increase the value of i after printing
        }
        
        nextNum = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextNum;
        
        cout << nextNum << " ";
        
    }
    
    return 0;
}
