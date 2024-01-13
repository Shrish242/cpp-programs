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

int findmid(struct node *head){
    struct node *p = head;
    struct node *q = head;
    while (q->next != NULL)
    {
        p = p->next;
        q= q->next->next;
    }
    cout<<p->data;
    return 0;
    
}
//1 2 3 4 5 6 7 NULL

int main() {
    struct node *head, *first, *second, *third, *fourth, *fifth, *sixth;
    head = new node;
    first = new node;
    second = new node;
    third = new node;
    fourth = new node;
    fifth = new node;
    sixth = new node;

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = fifth;

    fifth->data = 6;
    fifth->next = sixth;

    sixth->data = 7;
    sixth->next = NULL;

    cout << "the linked list is : " << endl;
    traversal(head);
    findmid(head);

    return 0;
}
