#include <iostream>
using namespace std;

struct node{
  int value;
  node* next;
};

node* head = NULL;

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    return false;
}

void insert_value(int value){
    node* new_node = new node;
    new_node->value = value;
    new_node->next = NULL;
    
    if(isEmpty()){ 
        head = new_node;
    }
    else{
        node* current_node = head;
        while(current_node->next != NULL){
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void print_value(){
    cout << "Printing Values\n";
    node* print_node = head;
    while(print_node->next != NULL){
        cout << print_node->value << endl;
        print_node = print_node->next;
    }
    cout << print_node->value;
}

int main(){
    insert_value(5);
    insert_value(7);
    insert_value(9);
    print_value();
    return 0;
}
