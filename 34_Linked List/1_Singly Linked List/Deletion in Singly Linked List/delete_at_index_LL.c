#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

// function that will prints the all nodes of a linked list
void linkedlist(struct node *ptr){
    int i = 0;
    while (ptr != NULL)
    {
        printf("Element[%d] : %d\n", i, ptr->data);
        ptr = ptr->link;
        i++;
    }
}

// structure function that will delete the node at the given index of a linked list
struct node *deleteAtIndex(struct node *head, int index)
{
    // Pointer p starts at the head of the list
    // It will stop at the node just before the one to be deleted
    struct node *p = head;

    // Pointer q points to the node next to p
    // This is the node that will be deleted
    struct node *q = p->link;
    
    for (int i = 0; i < index - 1; i++)  // Traverse the list until p reaches (index - 1) position
    {
        p = p->link;  // Move p to the next node
        q = q->link;  // Move q along with p
    }
    
    p->link = q->link;  // Make the previous node point to the node after the one we are deleting
    free(q);
    return head;
    
};

int main(){

    // declare the node pointer
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // Assign data and link nodes
    head->data = 79;
    head->link = second;

    second->data = 48;
    second->link = third;

    third->data = 38;
    third->link = fourth;

    fourth->data = 80;
    fourth->link = NULL;

    printf("Before deleting the node:\n");
    linkedlist(head); // function call, prints the all nodes of linked list

    printf("\nAfter deteling the node at given index:\n");
    head = deleteAtIndex(head, 2);  //function call, delete the node at given index of linked list
    linkedlist(head);  // function call, prints the all nodes of linked list

    return 0;
}
