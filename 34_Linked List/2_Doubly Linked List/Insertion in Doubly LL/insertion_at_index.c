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

//structure function for inserting node in between the index
struct node * insertAtIndex(struct node *head, int data, int index)
{
    //allocate memory for node in the linked list in heap
    struct node *ptr = (struct node*)malloc(sizeof(struct node));  //ptr will point to the new node
    
    //p is temporary pointer starts from the head and traverse through the list
    struct node * p = head; 

    int i = 0;
    while (i != index - 1)  //If index = 2, we stop at index 1 node so that after it we can insert
    {
        p = p->next;
        i++;
    }

    // Put the given value (data) inside the new node
    ptr->data = data;

    // Make the new node point to the node that comes AFTER p
    ptr->next = p->next;

    // Change p’s link so that it now points to the new node
    p->next = ptr;
     
    return head; // return the head
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
    linkedlist(head);  //function call

    printf("\n------after insertion------\n");
    head = insertAtIndex(head, 49, 2);  //insert the new node at given index
    linkedlist(head);  //function call

    return 0;
}