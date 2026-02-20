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

// structure function that will delete the node at the given index of a linked list
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head;

    // Pointer q starts at the second node
    // It will point to the node we want to delete
    struct node *q = p->next;
    
    // Move p and q forward until p is just before the node to delete
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;  // Move p one node ahead
        q = q->next;  // Move q one node ahead
    }
    
    p->next = q->next;  // Remove q from the list by linking p to the node after q
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

    second->data = 9;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = head;

    printf("-----before deletion-----\n");
    linkedlist(head);

    printf("\n-----after deletion-----\n");
    head = deleteAtIndex(head, 2);
    linkedlist(head);

    return 0;
}