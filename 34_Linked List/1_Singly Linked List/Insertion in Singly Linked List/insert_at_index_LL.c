#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;  //stores the value
    struct node * link;  //stores the address of the next node
};

// function to print linked list
void linkedlist(struct node *ptr){
    
    int i = 1;
    while (ptr != NULL)
    {
        printf("Element[%d]: %d\n", i, ptr->data);
        ptr = ptr->link;
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
        p = p->link;
        i++;
    }

    // Put the given value (data) inside the new node
    ptr->data = data;

    // Make the new node point to the node that comes AFTER p
    ptr->link = p->link;

    // Change p’s link so that it now points to the new node
    p->link = ptr;
     
    return head; // return the head
};

int main(){
    // Declare node pointers
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    // Allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // Assign data and link nodes
    head->data = 8;
    head->link = second;

    second->data = 7;
    second->link = third;

    third->data = 9;
    third->link = fourth;

    fourth->data = 3;
    fourth->link = NULL;

    printf("Before inserting node:\n");
    linkedlist(head);
    printf("\nAfter inserting new node at the first:\n");

    head = insertAtIndex(head, 49, 2); //insert the new node in between 2nd index 
    linkedlist(head); // function call

    return 0;
}
