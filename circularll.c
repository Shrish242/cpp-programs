#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int traversal(struct node* head){
    struct node *ptr = head;
    do
    {
        printf("The list is %d\n", ptr->data );
        ptr= ptr->next;
    } while (ptr != head);
    return 0;
}

struct node * insertfirst(struct node* head, int data){
    struct node * ptr  = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;   
}




int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data= 2;
    head->next = second;

    second->data =4;
    second->next= third;

    third->data= 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = head;

    printf("The data of linked list is:\n");
    traversal(head);

    head = insertfirst(head , 1);
    // head = insertlast(head , 10);
    // // head = insertatindex(head , 5 , 2);
    // head = insertnode(head , 7 , third);
    printf("The data of linked list is after process:\n");
    traversal(head);

    return 0;


}