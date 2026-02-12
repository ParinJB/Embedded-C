#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *next;
};

// function to print linked list in circular way
void linkedlist(struct node *head){
    struct node *ptr = head;
    int i = 0;
    
    do
    {
        printf("Elements[%d] = %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }while (ptr != head);
    
}

// Function to delete the first node from a circular linked list
struct node *deleteFirst(struct node *head)
{
    // ptr will store the current head (node to be deleted)
    struct node *ptr = head;

    // p is used to traverse the list to find the last node
    struct node *p = head;

    // If the list has only one node
    // That node points to itself
    if (head->next == head)
    {
        free(head);     // Free the only node
        return NULL;    // List becomes empty
    }

    // Traverse the circular linked list to reach the last node
    // The last node is the one whose next points to head
    while (p->next != head)
    {
        p = p->next;
    }

    // Update the last node's next to point to the new head
    p->next = head->next;

    // Move head to the next node (new first node)
    head = head->next;

    // Free the old head node
    free(ptr);

    // Return the updated head pointer
    return head;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 3;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = head;

    printf("-----before deletion:-----\n");
    linkedlist(head);

    printf("\n-----after deletion:-----\n");
    head = deleteFirst(head); // function call, delete the first node of linked list
    linkedlist(head);  // function call, prints the linked list
    return 0;
}