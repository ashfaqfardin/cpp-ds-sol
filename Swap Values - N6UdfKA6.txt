#include <iostream>

using namespace std;

void swap(double *value1, double *value2) {
    double temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}

int main()
{
    double first_value = 2.3;
    double second_value = 3.5;
    
    cout << "Value before swapping\n";
    cout << first_value << "\n";
    cout << second_value << "\n";
    
    cout << "\n";
    swap(&first_value, &second_value);
    
    cout << "Value after swapping\n";
    cout << first_value << "\n";
    cout << second_value << "\n";
    return 0;
}
