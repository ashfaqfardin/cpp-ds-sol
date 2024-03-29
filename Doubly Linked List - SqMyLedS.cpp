#include <iostream>
using namespace std;
 
struct node
{
    int value;
    node* next;
    node* prev;
};
node* head = NULL;
node* tail = NULL;
 
bool isempty()
{
    if(head==NULL) {
        return true;
    }
    return false;
}
 
void print_list()
{
    node * current_node = head;
    while(current_node!=NULL) {
        cout<<current_node->value<<endl;
        current_node = current_node->next;
    }
}
 
void insert_value(int value)
{
    node* new_node = new node;
    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = NULL;
 
    if(isempty()==true){
        head = new_node;
        tail = new_node;
    }
    else {
        node* current_node = head;
        while(current_node->next != NULL) {
            current_node = current_node->next;
        }
        current_node->next = new_node;
        new_node->prev = current_node;
        tail = new_node;
    }
}
 
void print_reverse()
{
    if(isempty()==true){
        cout<<"list is empty\n";
    }
    node* current_node = tail;
    while(current_node!=NULL) {
        cout<<current_node->value<<endl;
        current_node = current_node->prev;
    }
}
 
bool search_value(int value)
{
    node * current_node = head;
    while(current_node!=NULL) {
        if(current_node->value==value) {
            //cout<<"match found"<<endl;
            return true;
        }
        current_node = current_node->next;
    }
    //cout<<"match not found"<<endl;
    return false;
}

void delete_value(int value_to_be_deleted)
{
    if(isempty()==true) {
        cout<<"list is empty"<<endl;
    }
    else {
        if(head->value == value_to_be_deleted){
            node* node_to_be_deleted = head;
            head = head->next;
            head->prev = NULL; // added code
            delete node_to_be_deleted;
        }
        /*added tail code */
        else if(tail->value == value_to_be_deleted){
            node* node_to_be_deleted = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete node_to_be_deleted;
        }
        else {
            node* current_node = head;
            while(current_node->next != NULL) {
                if(current_node->next->value == value_to_be_deleted) {
                    node *node_to_be_deleted = current_node->next;
                    current_node->next = node_to_be_deleted->next;
                    current_node->next->prev = node_to_be_deleted->prev; //added code
                    delete node_to_be_deleted;
                }
                else {
                    current_node = current_node->next;
                }
 
            }
        }
    }
}
 
int main()
{
    insert_value(4);
    insert_value(5);
    insert_value(7);
    insert_value(7);
    cout << "Inserted list\n";
    print_list();
    cout << "Reversed list:\n";
    print_reverse();
    delete_value(7);
    cout << "Updated Value\n";
    print_reverse();
    cout << "Updated Value\n";
    print_list();
}
