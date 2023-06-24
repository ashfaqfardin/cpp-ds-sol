#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    
    int factorial = 1;
    for(int i = N; i > 0; i--){
        factorial *= i;
    }
    
    cout << "Factorial of " << N << " is " << factorial;
    return 0;
}
