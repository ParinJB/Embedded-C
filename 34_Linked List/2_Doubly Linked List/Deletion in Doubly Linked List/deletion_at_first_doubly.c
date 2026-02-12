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

// structure function that will delete the first node of a linked list
struct node *deleteFisrt(struct node *head)
{
    struct node *ptr = head;
    head = head->next;  // move head to the next 
    free(ptr); // free the memory of ptr
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
    head->data = 3;
    head->next = second;
    head->prev = NULL;

    second->data = 8;
    second->next = third;
    second->prev = head;

    third->data = 9;
    third->next = fourth;
    third->prev = second;

    fourth->data = 7;
    fourth->next = NULL;
    fourth->prev = third;

    printf("------before deletion------\n");
    linkedlist(head);  //function call

    printf("\n------after deletion------\n");
    head = deleteFisrt(head);  // delete the node at the beginning of list
    linkedlist(head);  //function call

    return 0;
}