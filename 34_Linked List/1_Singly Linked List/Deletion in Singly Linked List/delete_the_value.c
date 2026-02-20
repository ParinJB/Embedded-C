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
        printf("Element[%d] = %d\n", i , ptr->data);
        ptr = ptr->link;
        i++;
    }
}

// structure function that will delete the node of a given value of the linked list
struct node *deleteTheValue(struct node *head, int value)
{
    struct node *p = head;

    // Pointer q starts at the second node
    // It will point to the node that may be deleted
    struct node *q = head->link;


    // Traverse the list until, The value is found, or The end of the list is reached
    while (q->data != value  &&  q->link != NULL)
    {
        p = p->link;  // Move p to the next node
        q = q->link;  // Move q to the next node
    }
    if (q->data == value)  // If the node with the given value is found
    {
        p->link = q->link;  // Skip the node q by linking p directly to q's next node
        free(q);
    }
    return head;
}

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
    head->data = 9;
    head->link = second;

    second->data = 8;
    second->link = third;

    third->data = 3;
    third->link = fourth;

    fourth->data = 7;
    fourth->link = NULL;

    printf("Before deleting the node:\n");
    linkedlist(head); // function call, prints the all nodes of linked list

    printf("\nAfter deteling the node at given value:\n");
    head = deleteTheValue(head, 3); //function call, delete the node of a given value of linked list
    linkedlist(head); // function call, prints the all nodes of linked list
    return 0;
}