#include <iostream>

using namespace std;

int main()
{
    int findMax[3];
    
    cout << "Enter three inputs: \n";
    for(int i = 0; i < 3; i++){
        cin >> findMax[i];
    }
    
    //find the max
    int max = findMax[0];
    for(int i = 0; i < 3; i++){
        if(max < findMax[i]){
            max = findMax[i];
        }
    }
    
    cout << "The max value is: " << max;
    
    return 0;
}
