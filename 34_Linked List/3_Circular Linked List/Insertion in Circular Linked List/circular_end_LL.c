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

// structure function that will insert the node at the end of the list
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;  // Store the given data in the new node
    
    struct node *p = head;  // Pointer p is used to traverse the list to find the last node
    ptr->link = head;  // this will be the last node, it should point to head

    while (p->link != head)  // Traverse the list until p points to the current last node
    {
        p = p->link;  // Move to the next node
    } 
    
    p->link = ptr;   // Make the current last node point to the new node
   
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
    head = insertAtEnd(head, 62); // insert the new node at the end
    linkedlist(head); // function call

    return 0;
}