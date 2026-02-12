#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

// function to print linked list
void linkedlist(struct node *ptr){
    while (ptr != 0)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->link;
    }
    
}

// structure function that will insert the node at the end of the list
struct node *insertAtEnd(struct node *head, int data)
{
     // Allocate memory for the new node
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    // Store the given data in the new node
    ptr->data = data;

    // Since this node will be the last node,
    // its link should point to NULL
    ptr->link = NULL;

    // Pointer p is used to traverse the list
    struct node *p = head;

    while (p->link != NULL)  // Traverse the list until p reaches the last node
    {
        p = p->link;
    }
    
    p->link = ptr;  // Link the last node to the new node
   
    return head;
};

int main(){

    // Declare node pointers
    struct node *head;
    struct node *second;
    struct node *third;

    // Allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Assign data and link nodes
    head->data = 78;
    head->link = second;

    second->data = 89;
    second->link = third;

    third->data = 48;
    third->link = NULL;

    printf("Before inserting new node: \n");
    linkedlist(head);

    printf("After inserting node at end:\n");
    head = insertAtEnd(head, 88);  //insert the new node at the end of the list
    linkedlist(head);  //function call
    return 0;
}