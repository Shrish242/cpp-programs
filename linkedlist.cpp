#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertlast(node* &head , int val){
    node* n= new node(val);
    if (head == NULL)
    {
        head = n ;
        return;
    }
    
    node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp -> next;
    }
    temp->next=n;

}

void insertfirst(node* &head , int val){
    node* n = new node(val);
    n->next= head;
    head = n;
}
void display(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}

int main(){
    node* head = NULL;
    insertlast(head, 1);
    insertlast(head, 2);
    insertlast(head , 3);
    display(head);
    insertfirst(head , 5);
    display(head);

}