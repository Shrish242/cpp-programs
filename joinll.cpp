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
    // node* n= new node(data);
    if (head1 == NULL)
    {
        cout<<"It is empty"<<endl;
    }
    node* temp = head1;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=head2;
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
    node* head1= new node(2);
    head1->next = new node(4);
    head1->next->next = new node(6);
    head1->next->next->next = new node(8);

    node* head2 = new node(7);
    head2->next = new node(9);

    insert(head1 , head2);
    cout<<"Linked list"<<endl;
    display(head1);
    return 0;
}