#include<iostream>
using namespace std;

struct node1{
    int data;
    struct node1 *next;
};

struct node2{
    int data2;
    struct node2 *next , *head2;
};
int traversal2(struct node2 *head2){
    struct node2 *ptr = head2;
    while(ptr != NULL){
        cout<<ptr->data2<<" ";
        ptr = ptr->next;
    }
    return 0;
}

int traversal(struct node1 *head){
    struct node1 *ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    return 0;

}

// int join(struct node1 *head , struct node2 *head2){
//     struct node1 *p = head;
//     struct node1 *r = head->next;
//     struct node2 *q = head2;
//     while (p->next != NULL)
//     {
//         cout<<p->data<<endl;
//         p = p->next;
//     }
//     p->next = q;
//     while (p!= NULL)
//     {
//         cout<<p->data<<endl;
//         p = p->next;
//     }
//     return 0;
// }

struct node1* joinLinkedLists(struct node1* head1, struct node2* head2) {
    struct node1* p = head1;

    // Traverse to the end of the first linked list
    while (p->next != NULL) {
        p = p->next;
    }

    // Convert and attach the second linked list to the end of the first linked list
    struct node2* q = head2;
    while (q != NULL) {
        ListNode* newNode = new ListNode(q->val);
            newNode->next = nullptr;

        p->next = newNode;
        p = p->next;

        q = q->next;
    }

    return sort(list1);
}

struct node1* sort(struct node1* head1){
    for (struct node1* a = head1; a->next != NULL ; a = a->next)
    {
        for (struct node1* b = a->next; b != NULL; b= b->next)
        {
            if (a->data > b->data)
            {
                struct node1* n = new node1;
                n->data = a ->data;
                a->data = b->data;
                b->data = n->data;
            }
            
        }
        
    }
    return head1;  
     
}



int main(){
    struct node1 *head , *first , *second , *third, *fourth;
    head = new node1;
    first = new node1;
    second = new node1;
    third = new node1;
    fourth = new node1;

    struct node2 *head2 , *first2 , *second2 , *third2, *fourth2;
    head2 = new node2;
    first2 = new node2;
    second2 = new node2;
    third2 = new node2;
    fourth2 = new node2;

    head2->data2 = 11;
    head2->next = first2;

    first2->data2 = 2;
    first2->next = second2;

    second2->data2 = 13;
    second2->next = third2;

    third2->data2 = 4;
    third2->next = fourth2;

    fourth2->data2 = 15;
    fourth2->next = NULL;

    // cout<<"the linked list is of second : "<<endl;
    // traversal2(head2);

    head->data = 1;
    head->next = first;

    first->data = 12;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 14;
    third->next = fourth;

    fourth->data = 5;
    fourth->next = NULL;

    // cout<<"the linked list is : "<<endl;
    // traversal(head);
    
    cout << "\nThe joined linked list is:" << endl;
    struct node1* mergedList = joinLinkedLists(head, head2);
    traversal(mergedList);

    cout<<"the sorted lilnked list is:"<<endl;
    struct node1* sorted = sort(head);
    traversal(sorted);
    return 0;
}
