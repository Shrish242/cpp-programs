#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int traversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return 0;
}
// 1 2 2 3 3 3
int removeele(struct node **head, int val)
{
    struct node *a = *head;
    if (a->data == val)
    {
        *head = (*head)->next;
        struct node *b = (*head)->next;
        while (b != NULL)
        {
            if (b->data == val)
            {
                a->next = b->next;
            }
            else
            {
                a = a->next;
            }
            b = b->next;
        }
    }
    else{
        struct node *b = (*head)->next;
    while (b != NULL)
    {
        if (b->data == val)
        {
            a->next = b->next;
        }
        else
        {
            a = a->next;
        }
        b = b->next;
    }
    }
    
    return 0;
}

// int ifhead(struct node **head , int val){
//     struct node *d = *head;
//     struct node *c = (*head)->next;
//     if (d->data == val )
//     {

//         *head = c;
//         removeele(head , val);
//     }
//     else{
//         removeele( head , val);
//     }
//     return 0;
// }

int main()
{
    struct node *head, *first, *second, *third, *fourth, *fifth, *sixth;
    head = new node;
    first = new node;
    second = new node;
    third = new node;
    fourth = new node;
    fifth = new node;
    sixth = new node;

    head->data = 2;
    head->next = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = fifth;

    fifth->data = 2;
    fifth->next = sixth;

    sixth->data = 3;
    sixth->next = NULL;

    cout << "the linked list is : " << endl;
    traversal(head);
    removeele(&head, 2);
    cout << "The new is: " << endl;
    traversal(head);

    return 0;
}
