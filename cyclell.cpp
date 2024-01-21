#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node1{
    int data1;
    struct node1 *next;
};

int traversal(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    return 0;
}
int traversal(struct node1 *head1){
    struct node1 *ptr = head1;
    while(ptr != NULL){
        cout<<ptr->data1<<" ";
        ptr = ptr->next;
    }
    return 0;
}

//1 2 3 4 5 
int checking(struct node *head){
    struct node *subhead = head;
    struct node *a = head;
    struct node *b = head->next;
    struct node *c = head->next->next;
    while ( a->next != NULL)
    {
        
    }
    
    
    
}

int main()
{
    struct node *head, *first, *second, *third, *fourth;
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

     struct node1 *head1, *first1, *second1, *third1, *fourth1;
    head1 = new node1;
    first1 = new node1;
    second1 = new node1;
    third1 = new node1;
    fourth1 = new node1;

    head1->data1 = 1;
    head1->next = first1;

    first1->data1 = 2;
    first1->next = second1;

    second1->data1 = 3;
    second1->next = third1;

    third1->data1 = 4;
    third1->next = fourth1;

    fourth1->data1 = 5;
    fourth1->next = NULL;

    traversal(head);
    cout<<"The next ll is:"<<endl;
    traversal(head1);
    return 0;
}