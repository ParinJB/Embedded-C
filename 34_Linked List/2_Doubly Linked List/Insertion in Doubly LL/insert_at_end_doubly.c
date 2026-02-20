#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// function to print linked list
void linkedlist(struct node *ptr){
    int i = 0;
    while (ptr != NULL)
    {
        printf("Elements[%d]: %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
    
}

// Function to insert a new node at the end of a doubly linked list
struct node * insertAtEnd(struct node *head, int data)
{
    // Allocate memory for the new node
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    // Assign data to the new node
    ptr->data = data;
    ptr->next = NULL;   // Last node always points to NULL

    // If the list is empty, new node becomes head
    if (head == NULL)
    {
        ptr->prev = NULL;
        return ptr;
    }

    // Create a temporary pointer to traverse the list
    struct node *temp = head;

    // Traverse to the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Link the last node with the new node
    temp->next = ptr;
    ptr->prev = temp;

    // Head does not change, so return head
    return head;
}

int main(){

    // Declare node pointers
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // Assign data and link nodes
    head->data = 7;
    head->next = second;
    head->prev = NULL;

    second->data = 8;
    second->next = third;
    second->prev = head;

    third->data = 9;
    third->next = fourth;
    third->prev = second;

    fourth->data = 3;
    fourth->next = NULL;
    fourth->prev = third;

    printf("------before insertion------\n");
    linkedlist(head);  // function call

    printf("\n------after insertion------\n");
    head = insertAtEnd(head, 49);  // insert the new node at the end
    linkedlist(head);  // function call

    return 0;
}
