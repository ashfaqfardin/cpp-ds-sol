#include <iostream>
#include <unistd.h>
using namespace std;
void enqueue();
void dequeue();
bool isEmpty();
bool isFull();
void end();

int numberOfPeople = 10;
string accountOwnerName[10];
int front = 0;
int rear = -1;
int count = 0;


bool isEmpty(){
    if(front > rear){
        return true;
    }
}

bool isFull(){
    if(rear == numberOfPeople - 1) return true;
}

void dequeue(){
    for(int i = 0; i < numberOfPeople; i++){
        cout.flush();
        //sleep(120);
        sleep(2); // 2 seconds taken instead of 120 seconds
        cout << accountOwnerName[i] << " LEFT" << endl;
        rear--;
    }
}

void enqueue(){
    if(isEmpty){
        cout << "ENTER TEN PEOPLE NAME:\n";
        for(int i = 0; i < numberOfPeople; i++){
            cin >> accountOwnerName[i];
            rear++;
        }
    }
    if(isFull){
        cout << "WAIT OUTSIDE PLEASE\n";
        dequeue();
    }
}


void end(){
    cout << "BANK IS CLOSED FOR THE DAY\n";
}

int main(){
    int turns = 3;
    for(int i = 0; i < turns; i++){
        enqueue();
        count++;
    }
    if(count == 3){
        end();
    }
    return 0;
}
