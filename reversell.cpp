#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

//1 2 3 4 5 6 7

void reverse(struct node **head) {
    struct node *current = *head;
    struct node *previous = NULL;
    struct node *nextNode = NULL;

    while (current != NULL) {
        nextNode = current->next; // Save the next node
        current->next = previous; // Reverse the link
        previous = current;       // Move to the next pair of nodes
        current = nextNode;      // Move to the next node
    }

    // Update the head to point to the new first node
    *head = previous;
}



int traversal(struct node *head){
    struct node *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
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
    reverse(&head);
    cout<<"the reverse list is:"<<endl;
    traversal(head);

    return 0;
}