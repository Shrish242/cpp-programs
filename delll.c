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

// struct node * insertatindex(struct node *head, int data, int index){
//     struct node * ptr = (struct node *)malloc(sizeof(struct node));
//     struct node * p = head;
//     int i = 0;
//     while (i != index-1)
//     {
//         p = p->next;
//         i++;
//     }
//     p->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
    
// }
// struct node * insertnode(struct node *head, int data, struct node *prevnode){
//     struct node * ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->data = data;
//     ptr ->next = prevnode->next;
//     prevnode->next = ptr;
//     return head;
// }



// struct node * insertlast(struct node *head , int data){
//     struct node * ptr = (struct node *)malloc(sizeof(struct node));
//     ptr->data = data;
//     struct node * p =head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;

    
// }

//deletion of linked list

struct node *deletefirst(struct node *head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deletelast(struct node *head){
    struct node * p = head;
    struct node * q = head->next;
    while (q->next != NULL)
    {
        p= p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
    
}

struct node *deleteindex(struct node *head , int index){
    struct node * p = head;
    struct node * q = head-> next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    q->next = p->next;
    free(q);
    return head;
}

struct node * deletedata(struct node *head , int data){
    struct node * p = head;
    struct node * q = head->next;
    while (q->data != data)
    {
        p = p->next;
        q= q->next;
    }
    p->next = q->next;
    return head;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data= 2;
    head->next = second;

    second->data =4;
    second->next= third;

    third->data= 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = fifth;

    fifth->data = 10;
    fifth->next = NULL;

    printf("The data of linked list is:\n");
    traversal(head);
    head = deletedata(head , 8);
    printf("The data of new linked list is:\n");
    traversal(head);


    // head = insert1(head , 1);
    // head = insertlast(head , 10);
    // // head = insertatindex(head , 5 , 2);
    // head = insertnode(head , 7 , third);
    // printf("The data of linked list is after process:\n");
    // traversal(head);

return 0 ;

}