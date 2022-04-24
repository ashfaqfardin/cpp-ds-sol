#include <iostream>

using namespace std;

int main()
{
    int companyNames = 5;
    string *arr = new string[companyNames]; // Company Name string
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int M = 3; // Number of Company  
    int *arr2 = new int[M];
    
    for(int i = 0; i < M; i++){
        arr2[i] = 0; // count initialization with 0
    }
    
    for(int i = 0; i < N; i++){
            if (arr[i] == "Samsung"){
                arr2[0]++;
            }
            else if(arr[i] == "Cefalo"){
                arr2[1]++;
            }
            else{
                arr2[2]++;
            }
    }
    
    for(int i = 0; i < M; i++){
        cout << arr2[i] << " ";
    }
    return 0;
}
