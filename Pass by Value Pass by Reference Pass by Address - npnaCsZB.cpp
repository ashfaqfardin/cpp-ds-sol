#include <iostream>

using namespace std;

void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    
    cout << x << " " << y << endl;
}

void swap2(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void swap3(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 2;
    int b = 3;
    
    swap(a, b);
    
    swap2(a, b);
    cout << a << " " << b << endl;
    
    swap3(&a, &b);
    cout << a << " " << b << endl;
    
    
    return 0;
}
