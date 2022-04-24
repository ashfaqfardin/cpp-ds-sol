#include <iostream>

using namespace std;

void positiveCheck(int *number){
    if(*number > 0){
        cout << "Positive";
    }
    else if (*number < 0){
        cout << "Negative";
    }
    else{
        cout << "Zero";
    }
}

int main()
{
    int num = 2;
    positiveCheck(&num);
    cout << endl;
    
    num = 0;
    positiveCheck(&num);
    cout << endl;
    
    num = -2;
    positiveCheck(&num);
    cout << endl;
    
    return 0;
}
