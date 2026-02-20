#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node * link;
};

// function to print all nodes of linked list
void linkedlist(struct node *ptr){
        int i = 0;
        while (ptr != NULL)
        {
            printf("Element[%d] : %d\n", i, ptr->data);
            ptr = ptr->link;
            i++;
        }
}

// structure function that will delete the first node of a linked list
struct node *deleteFisrt(struct node *head)
{
    struct node *ptr = head;
    head = head->link;  // move head to the next 
    free(ptr); // free the memory of ptr
    return head;
};

int main(){
    
    //declare the node pointer 
    struct node *head;
    struct node *second;
    struct node *third;

    // allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Assign data and link nodes
    head->data = 9;
    head->link = second;

    second->data = 7;
    second->link = third;

    third->data = 8;
    third->link = NULL;

    printf("Before deleting nodes:\n");
    linkedlist(head); // function call

    printf("\nAfter deleting node at beginning:\n");
    head = deleteFisrt(head); // function call, delete the first node of linked list
    linkedlist(head);  // function call, prints the linked list
    return 0;
}