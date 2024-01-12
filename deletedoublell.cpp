#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int traversal(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    return 0;
}

int delete(struct node *head){
    for (struct node *p = head; p->next != NULL; p = p->next)
    {
        for (struct node *q = head->next; q->next != NULL; q=q->next)
        {
            if (q->data == p->data)
            {
                
            }
            
        }
        
    }
    
}

int main(){
    struct node *head , *first , *second , *third, *fourth;
    head = new node;
    first = new node;
    second = new node;
    third = new node;
    fourth = new node;

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;

    cout<<"the linked list is : "<<endl;
    traversal(head);
}