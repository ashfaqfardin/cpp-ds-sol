#include <iostream>

using namespace std;

int a = 5;

int sum(int a, int b){
    return (a+b);
}

void greetings(){
    cout << "Welcome\n";
}

int square(){
    a = a*a;
    return a;
}

int main()
{
    greetings(); // prints Welcome
    int b = 7;
    a = a + sum(a, b); // 5 + (5+7) = 17
    square(); // 17*17 = 289
    cout << a << endl; // 289
    
    return 0;
}
