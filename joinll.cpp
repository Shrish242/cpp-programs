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

void insert(node* &head1, node* &head2){
    if (head1 == NULL)
    {
        cout<<"It is empty"<<endl;
    }
    if (head2 == NULL)
    {
        cout<<"It is empty"<<endl;
    }
    node* dummy = new node(0); // Provide an argument for the constructor
    dummy->next= NULL;
    node* temp = dummy;
    node* temp1 = head1;
    node* temp2 = head2;
    while (temp1->next != NULL && temp2->next != NULL)
    {
        if (temp1->data <= temp2->data)
        {
            temp->next = temp1;
            temp1= temp1->next;
        }
        else{
            temp->next = temp2;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    if (temp1!= NULL)
    {
     temp->next=temp1;
    }
    else{
        temp->next = temp2;
    }
}

void display(node* head){
    node* temp = head;
    while (temp!= NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}

int main(){
    node* head1= new node(1);
    head1->next = new node(2);
    head1->next->next = new node(4);

    node* head2 = new node(1);
    head2->next = new node(3);
    head2->next->next = new node(4);

    insert(head1 , head2);
    cout<<"Linked list"<<endl;
    display(head1);
    return 0;
}