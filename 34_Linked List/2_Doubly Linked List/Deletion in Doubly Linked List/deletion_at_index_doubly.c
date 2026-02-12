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

// structure function that will delete the node at the given index of a linked list
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head; // Pointer p initially points to the head of the list

    // Pointer q points to the node next to p
    // This will be the node that we want to delete
    struct node *q = p->next;
    
    // Traverse the list until p reaches the node
    // just before the one to be deleted
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;  // Move p to the next node
        q = q->next;  // Move q along with p
    }
    
    // Link p directly to the node after q
    // This removes q from the linked list
    p->next = q->next;
    free(q);  // Free the memory of the deleted node
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
    head->data = 8;
    head->next = second;
    head->prev = NULL;

    second->data = 7;
    second->next = third;
    second->prev = head;

    third->data = 4;
    third->next = fourth;
    third->prev = second;

    fourth->data = 9;
    fourth->next = NULL;
    fourth->prev = third;

    printf("------before deletion------\n");
    linkedlist(head);  //function call

    printf("\n------after deletion------\n");
    head = deleteAtIndex(head, 2);  //delete the node at the given index
    linkedlist(head);  //function call

    return 0;
}