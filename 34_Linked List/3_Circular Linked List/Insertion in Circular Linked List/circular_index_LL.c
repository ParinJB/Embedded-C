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

//structure function for inserting node in between the index
struct node * insertAtIndex(struct node *head, int data, int index)
{
    //allocate memory for node in the linked list in heap
    struct node *ptr = (struct node*)malloc(sizeof(struct node));  //ptr will point to the new node
    
    //p is temporary pointer starts from the head and traverse through the list
    struct node * p = head; 

    int i = 0;
    while (i != index - 1)  //If index = 2, we stop at index 1 node so that after it we can insert
    {
        p = p->link;
        i++;
    }

    // Put the given value (data) inside the new node
    ptr->data = data;

    // Make the new node point to the node that comes AFTER p
    ptr->link = p->link;

    // Change p’s link so that it now points to the new node
    p->link = ptr;
     
    return head; // return the head
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
    head = insertAtIndex(head, 62, 3); // insert the new node at the given index
    linkedlist(head); // function call

    return 0;
}