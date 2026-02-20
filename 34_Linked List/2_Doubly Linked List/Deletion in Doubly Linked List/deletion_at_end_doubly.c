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

// structure function that will delete the node at the end of the linked list
struct node *deleteAtEnd(struct node *head)
{
    // Pointer p starts at the head of the list
    // It will point to the second-last node
    struct node *p = head;

    // Pointer q starts at the second node
    // It will point to the last node
    struct node *q = head->next;

    while (q->next != NULL)  // Traverse the list until q reaches the last node
    {
        p = p->next;  // Move p to the next node
        q = q->next;  // Move q to the next node
    }

    // Set the next pointer of the second-last node to NULL
    // This removes the last node from the list
    p->next = NULL;
    free(q);  // Free the memory of the deleted last node
    return head;
    
};

int main(){

    //declare the node pointer 
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
    head->data = 78;
    head->next = second;
    head->prev = NULL;

    second->data = 98;
    second->next = third;
    second->prev = head;

    third->data = 88;
    third->next = fourth;
    third->prev = second;

    fourth->data = 97;
    fourth->next = NULL;
    fourth->prev = third;

    printf("------before deletion------\n");
    linkedlist(head);  //function call

    printf("\n------after deletion------\n");
    head = deleteAtEnd(head);  //delete the node at the end of list
    linkedlist(head);  //function call
    
    return 0;
}