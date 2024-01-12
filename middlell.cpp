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
struct node* middle(struct node* head);
struct node* mergedsort(struct node* left, struct node* right);



struct node* middle(struct node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct node* a = head;
    struct node* b = head;

    while (a->next != NULL && a->next->next != NULL) {
        a = a->next->next;
        b = b->next;
    }
    return b;
}
struct node* mergedsort(struct node *p1, struct node *p2){
    if (p1 == NULL || p2 == NULL)
    {
        return (p1 == NULL) ? p2 : p1;
    }
    struct node *ans = new node;
    ans->data = 0;
    ans->next = NULL;

    struct node *curr = ans;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            curr->next = p1;
            p1 = p1->next;
        }
        else{
            curr->next = p2;
            p2 = p2->next;
        }
        curr = curr->next;
    }
    if (p1 != NULL && p2 != NULL)
    {
        curr->next = (p1 != NULL)? p1 : p2;
    }
    return ans->next;
}

struct node* sort(struct node* head) {
    if (head == NULL || head->next == NULL)
    {
       return head;
    }
    struct node* a = middle(head);
    struct node* b = a->next;
    a->next = NULL;

    struct node* left = sort(head);
    struct node* right = sort(b);

    return mergedsort(left, right);
    
    
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

    head->data = 7;
    head->next = first;

    first->data = 3;
    first->next = second;

    second->data = 1;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = fifth;

    fifth->data = 3;
    fifth->next = sixth;

    sixth->data = 9;
    sixth->next = NULL;

    cout << "the linked list is : " << endl;
    traversal(head);
    middle(head);
    cout<<endl;
    sort(head);
    traversal(head);
    cout<<endl;

    return 0;
}
