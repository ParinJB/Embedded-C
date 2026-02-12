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
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->link;
    }
    
}

// structure function that will insert the node at the end of the list
struct node *insertAfterNode(struct node *head, struct node *prevnode, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));  // Allocate memory for the new node
    
    // Store the given data in the new node
    ptr->data = data;

    // Make the new node point to the node
    // that comes after prevnode
    ptr->link = prevnode->link;

    // Update prevnode to point to the new node
    prevnode->link = ptr;
    return head;
};


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
    head->data = 9;
    head->link = second;

    second->data = 7;
    second->link = third;

    third->data = 4;
    third->link = fourth;

    fourth->data = 8;
    fourth->link = NULL;

    printf("before inserting the node:\n");
    linkedlist(head);

    printf("After inserting the node:\n");
    head = insertAfterNode(head, second, 88);  // insert new node after the node
    linkedlist(head); //function call
    return 0;
}
