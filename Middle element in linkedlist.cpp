// find the middle element in linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to add a new node
void pushNode(struct Node** head_ref, int data_val)
{
    // Allocate node
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    // Check if memory allocation was successful
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    // Put in the data
    new_node->data = data_val;

    // Link the old list of the new node
    new_node->next = *head_ref;

    // move the head to point to the new node
    *head_ref = new_node;
}

// Function to get the middle of the linked list
int getMiddle(struct Node* head)
{
    // Initialize the slow and fast pointer to the head of
    // the linked list
    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    while (fast_ptr != NULL && fast_ptr->next != NULL) {
        // Move the fast pointer by two nodes
        fast_ptr = fast_ptr->next->next;
        // Move the slow pointer by one node
        slow_ptr = slow_ptr->next;
    }
    return slow_ptr->data;
}

// Driver Code
int main()
{
    struct Node* head = NULL;
    for (int i = 5; i > 0; i--) {
        pushNode(&head, i);
    }
    printf("Middle Value Of Linked List is: %d\n",
           getMiddle(head));
    return 0;
}