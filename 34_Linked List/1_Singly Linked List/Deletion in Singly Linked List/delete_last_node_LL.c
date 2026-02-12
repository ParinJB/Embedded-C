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
        printf("Elements[%d] : %d\n", i, ptr->data);
        ptr = ptr->link;
        i++;
    }
    
}

// structure function that will delete the node at the end of the linked list
struct node *deleteAtEnd(struct node *head)
{
    // Pointer p starts at the first node
    // It will stop at the second-last node
    struct node *p = head;

    // Pointer q starts at the second node
    // It will reach the last node
    struct node *q = head->link;

    while (q->link != NULL)  // Move both pointers until q reaches the last node
    {
        p = p->link;  // Move p to next node
        q = q->link;  // Move q to next node
    }

    // Make the second-last node point to NULL
    // This removes the last node from the list
    p->link = NULL;
    free(q);
    return head;
    
};

int main(){

    //declare the node pointer
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    // Assign data and link nodes
    head->data = 98;
    head->link = second;

    second->data = 78;
    second->link = third;

    third->data = 49;
    third->link = fourth;

    fourth->data = 67;
    fourth->link = NULL;

    printf("Before deleting the node:\n");
    linkedlist(head); // function call, prints the all nodes of linked list
 
    printf("\nAfter deleting the node:\n");
    head = deleteAtEnd(head);  //function call, delete the node at the end of linked list
    linkedlist(head); // function call, prints the all nodes of linked list
    return 0;
}