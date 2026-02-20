#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *next;
};

// function to print linked list
void linkedlist(struct node *head){
    int i = 0;
    struct node *ptr = head;

    do
    {
        printf("Elements[%d]: %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;

    } while (ptr != head);
    
}

// structure function that will delete the node at the end of the list
struct node *deleteAtEnd(struct node *head)
{
    
    struct node *p = head;

    // Pointer q starts at the node next to head
    // It will reach the last node
    struct node *q = head->next;
   
    // Traverse the list until q points to the last node
    // In a circular list, the last node points back to head
    while (q->next != head)
    {
        p = p->next;  // Move p to the next node
        q = q->next;  // Move q to the next node
    }
    
    // Make the second-last node point back to head
    // This removes the last node from the circular list
    p->next = head;
    free(q);

    return head;
};

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = head;

    printf("-----before deletion-----\n");
    linkedlist(head);

    printf("\n-----after deletion-----\n");
    head = deleteAtEnd(head);
    linkedlist(head);
    return 0;
}