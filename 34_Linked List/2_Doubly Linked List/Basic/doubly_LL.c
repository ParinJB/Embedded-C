#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// function to print linked list in forward
void linkedlist_forward(struct node *ptr){
    int i = 0;
    while (ptr != NULL)
    {
        printf("Elements[%d]: %d\n", i, ptr->data);
        ptr = ptr->next; // move forward
        i++;
    }

}

// function to print linked list in reverse
void linkedlist_reverse(struct node *ptr){
    int i = 0;
    while (ptr != NULL)
    {
        printf("Elements[%d]: %d\n", i, ptr->data);
        ptr = ptr->prev;   // move backward
        i++;
    }
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

    printf("-----forward traversal-----\n");
    linkedlist_forward(head);  //function call

    printf("\n-----backward traversal-----\n");
    linkedlist_reverse(fourth); //function call

    return 0;
}