#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

// Function to copy a linked list
struct node* copy(struct node* originalHead) {
    if (originalHead == NULL) {
        return NULL;
    }

    struct node* newHead = new node{originalHead->data, NULL};
    struct node* originalPtr = originalHead->next;
    struct node* newPtr = newHead;

    while (originalPtr != NULL) {
        newPtr->next = new node{originalPtr->data, NULL};
        originalPtr = originalPtr->next;
        newPtr = newPtr->next;
    }

    return newHead;
}

// Function to traverse and display a linked list
void traversal(struct node* ptr) {
    while (ptr != NULL) {
        printf("the element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
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

int main() {
    struct node* head, * first, * second, * third, * fourth, * fifth, * sixth;
    head = new node{1, NULL};
    first = new node{2, NULL};
    second = new node{1, NULL};
    //third = new node{4, NULL};
    //fourth = new node{5, NULL};
    //fifth = new node{6, NULL};
    //sixth = new node{7, NULL};

    head->next = first;
    first->next = second;
    second->next = NULL;
    //third->next = NULL;
    //fourth->next = fifth;
    //fifth->next = sixth;

    cout << "Original linked list:" << endl;
    traversal(head);
    // Copy the linked list
    struct node* newHead = copy(head);

    cout << "\nCopied linked list:" << endl;
    traversal(newHead);

     reverse(&head);
    cout<<"the reverse list is:"<<endl;
    traversal(head);

    while (newHead != NULL && head != NULL) {
        if (newHead->data != head->data) {
            cout << "It is not a palindrome" << endl;
            return 0;
        } else {
            newHead = newHead->next;
            head = head->next;
        }
    }

    cout << "It is a palindrome" << endl;

    return 0;
}
