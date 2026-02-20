#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

// function to print linked list
void linkedlist(struct node *ptr){
    int i = 0;
    while (ptr != NULL)
    {
        printf("Elements[%d]: %d\n", i, ptr->data);
        ptr = ptr->prev;
        i++;
    }
    
}

// Function to insert a new node at the beginning of a doubly linked list
struct node * insertAtFirst(struct node *head, int data)
{
    // Allocate memory for the new node in heap
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    // Assign data to the new node
    ptr->data = data;

    // Since this node will be the first node,
    // its previous pointer should be NULL
    ptr->prev = NULL;

    // Link the new node to the current head node
    ptr->next = head;

    // If the list is not empty,
    // update the previous pointer of the old head
    if (head != NULL)
    {
        head->prev = ptr;
    }

    // Return the new node as the new head of the list
    return ptr;
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
    head->data = 8;
    head->prev = NULL;
    head->next = second;

    second->data = 7;
    second->prev = head;
    second->next = third;

    third->data = 9;
    third->prev = second;
    third->next = fourth;

    fourth->data = 4;
    fourth->prev = third;
    fourth->next = NULL;

    printf("------before insertion------\n");
    linkedlist(fourth);

    printf("\n------after insertion------\n");
    head = insertAtFirst(head, 3);
    linkedlist(fourth);

    return 0;
}