#include <iostream>

using namespace std;

int main()
{
    int currentYear = 2021;
    int birthYear = 0;
    cin >> birthYear;
    
    
    int ageInYear = currentYear - birthYear;
    
    if(ageInYear > 17){
        cout << "You can cast vote\n";
    }
    else{
        cout << "You can't vote";
    }
    
    return 0;
}
