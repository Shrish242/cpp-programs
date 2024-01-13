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

//1 1 2 2 3 3 3
int dupli(struct node *head){
    struct node *a = head;
    struct node *b = head->next;
    // struct node *c = head->next->next;
    while (b != NULL)
    {
        if (a->data == b->data)
        {
            a->next = b->next;
        }
        else{
            a = a->next;
        }
        b = b->next;
    }
    return 0;
}


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

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = fifth;

    fifth->data = 3;
    fifth->next = sixth;

    sixth->data = 3;
    sixth->next = NULL;

    cout << "the linked list is : " << endl;
    traversal(head);
    dupli(head);
    cout<<"New linked list:"<<endl;
    traversal(head);

    return 0;
}
