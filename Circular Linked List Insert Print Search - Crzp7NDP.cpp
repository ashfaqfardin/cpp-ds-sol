#include <iostream>
using namespace std;
 
struct node{
  char value;
  node* next;
};
 
node* head = NULL;
 
bool isEmpty(){
    if(head == NULL){
        return true;
    }
    return false;
}
 
void insert_value(node* current_node, char value){
    node* new_node = new node;
    new_node->value = value; //head;
    
    if(isEmpty()){ 
        head = new_node;
        head->next = head;
    }
    else{
        if(current_node->next != head){
            current_node = current_node->next;
            insert_value(current_node, value);
        }
        new_node->next = head;
        current_node->next = new_node;
    }
}

void print_value(node* current_node){
    if(current_node->next == head){
        cout<<current_node->value;
        return;
    }
    else{
        cout<<current_node->value<<" ";
    }
    print_value(current_node->next);
}

bool search(node *current_node, char searchValue){
    if(current_node->next == head){
        if(current_node->value == searchValue){
            return true;
        }
        else{
            return false;
        }
    }
    if(current_node->value == searchValue){
        return true;
    }
    return search(current_node->next, searchValue);
}
 
int main(){
    insert_value(head, 'a');
    insert_value(head, 'b');
    insert_value(head, 'c');
    
    cout << "Printing Values\n";
    print_value(head);
    cout << endl;
    cout << search(head, 'd');
    cout << endl;
    cout << search(head, 'a');
    return 0;
}
