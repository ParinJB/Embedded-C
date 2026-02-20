#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

// Function to print all data in a singly linked list
void printdata(struct node *head){

    if(head == NULL)   // If the list is empty, print a message and exit
    {
        printf("link list is empty!\n");
    }
    struct node *p = NULL;   // Pointer p is used to traverse the list
    p = head;

    while(p != NULL)    // Loop through the list until p becomes NULL (end of list)
    {
        printf("%d\n", p->data);  // Print the data of the current node
        p = p->link;    // Move to the next node
    }
}

int main(){
    struct node *head = NULL; // Declared and initialized head
    printdata(head);  // function call
    return 0;
}


