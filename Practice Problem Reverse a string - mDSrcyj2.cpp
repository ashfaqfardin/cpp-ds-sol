#include <bits/stdc++.h>
using namespace std;

void reverse(string name, int size, int i){
    if(i == size){
        return;
    }
    
    i++;
    reverse(name, size, i);
    cout << name[i];
}

int main()
{
    string name = "ashfaq";
    int size = name.size();
    //cout << size;
    int i = -1;
    reverse(name, size, i);
    
    return 0;
}
