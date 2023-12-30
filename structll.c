#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

int traversal(struct node* ptr){
    while (ptr != NULL)
    {
        printf("the element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}

struct node * insert1(struct node *head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
} 

struct node * insertatindex(struct node *head, int data, int index){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    int i = 0;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    p->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
    
}
struct node * insertnode(struct node *head, int data, struct node *prevnode){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr ->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}



struct node * insertlast(struct node *head , int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p =head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
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
    fourth->next = NULL;

    printf("The data of linked list is:\n");
    traversal(head);

    head = insert1(head , 1);
    head = insertlast(head , 10);
    // head = insertatindex(head , 5 , 2);
    head = insertnode(head , 7 , third);
    printf("The data of linked list is after process:\n");
    traversal(head);


}