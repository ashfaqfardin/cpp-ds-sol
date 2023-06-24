#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head = NULL;

void appendNode(int);
void display();

int find_Max(Node *current, int max){
    if(current == NULL){
        return max;
    }
    if(current == head){
        max = head->data;
    }
    else{
        if(current->data > max){
            max = current->data;
        }
    }
    return find_Max(current->next , max);
}

int main()
{appendNode(70);
    appendNode(10);
    appendNode(20);
    appendNode(30);
    appendNode(40);
    
    appendNode(50);
    appendNode(60);
    

    int max;
    cout<<find_Max(head, max);
    
    
    return 0;
}

void appendNode(int value){
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        Node *tNode = head;
        while(tNode->next != NULL){
            tNode = tNode->next;
        }
        tNode->next = newNode;
    }
}

void display(){
    if(head == NULL){
         cout<<"No Nodes there";
    }
    else{
        Node *tNode = head;
        while(tNode != NULL){
            cout<<tNode->data<<" ";
            tNode = tNode->next;
        }
    }
    cout<<endl;
}
