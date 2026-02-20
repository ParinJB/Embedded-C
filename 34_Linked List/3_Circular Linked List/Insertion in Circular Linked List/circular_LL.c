#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

// function to print linked list in circular way
void linkedlist(struct node *head){
    struct node *ptr = head;
    int i = 0;
    
    do
    {
        printf("Elements[%d] = %d\n", i, ptr->data);
        ptr = ptr->link;
        i++;
    }while (ptr != head);
    
}

//structure function for inserting node at the beginning
struct node *insertAtFirst(struct node *head, int data)
{
    // Allocate memory for the new node
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;  // Store the data in the new node

    struct node *p = head->link;  // Pointer p is used to traverse the list to find the last node
    
    // Traverse until p points to the last node (whose next points to head)
    while (p->link != head)
    {
        p = p->link;
    }

    p->link = ptr;  // Make the last node point to the new node
    ptr->link = head;  // Make the new node point to the current head
    head = ptr;   // Update head to the new node
    return head;
};

int main(){
    //declare node pointers
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    //link first and second nodes
    head->data = 8;
    head->link = second;

    //link second and third nodes
    second->data = 4;
    second->link = third;

    //link third and fourth nodes
    third->data = 9;
    third->link = fourth;

    fourth->data = 7;
    fourth->link = head;

    printf("Before insertion:\n");
    linkedlist(head); // function call

    printf("\nAfter insertion:\n");
    head = insertAtFirst(head, 62); // insert the new node at the beginning
    linkedlist(head); // function call

    return 0;
}