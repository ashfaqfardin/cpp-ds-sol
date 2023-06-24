#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int value = 0;
    while(true){
        cout << "Enter a value: ";
        cin >> value;
        
        if(value == 0){
            break;
        }
        sum += value;
        cout << "Running total is: " << sum << endl;
    }
    
    
    return 0;
}
