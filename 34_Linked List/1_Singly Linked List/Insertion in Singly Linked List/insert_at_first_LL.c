#include<stdio.h>
#include<stdlib.h>

//struct for nodes
struct node
{
    int data;
    struct node *link;
};

//function for traversing nodes
void linkedlist(struct node *ptr){
    while (ptr != NULL)
    {
        printf("Elements: %d\n", ptr->data);
        ptr = ptr->link;
    }
}

//function for inserting node at beginning 
struct node * insertAtFirst(struct node *head, int data)
{

    //allocate memory for node in the linked list in heap
    //creates a new node 
    struct node *ptr = (struct node*)malloc(sizeof(struct node));  

    ptr->link = head;  //new node's link points to the current head which is the first node
    ptr->data = data;  //new node's data set to the value we pass
    return ptr;  //function returns the new node which becomes the new head of list
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
    fourth->link = NULL;

    printf("Before inserting new node:\n");
    linkedlist(head); // function call
    printf("\nAfter inserting new node at the first:\n");
    head = insertAtFirst(head, 43); //assign new inserted node at the first to the head
    linkedlist(head); // function call 

    return 0;
}
