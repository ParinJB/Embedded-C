#include<stdio.h>
#include<stdlib.h>

// Structure definition for a stack node
struct node
{
    int data;
    struct node *next;      // Pointer to the next node
}*top = NULL;               // Global pointer 'top' initialized to NULL stack is empty

// Enum for menu choices
typedef enum{
    Push = 1, Print, Exit
}Menu;

// Function to push an element onto the stack
void push(int data){

    struct node *newnode;
    
    // Allocate memory for new node
    newnode = malloc(sizeof(struct node));  

    if (newnode == NULL)        // Check if memory allocation failed
    {
        printf("Stack overflow\n");
        exit(1);
    }
    newnode->data = data;      // Assign data to new node
    newnode->next = NULL;      

    // Since it will be inserted at top, make new node point to current top
    newnode->next = top;
    top = newnode;      // Update top to point to new node
}

// Function to print stack elements
void print(){
    struct node *temp;
    temp = top;         // Start from top of stack

    printf("The stack elements are: ");
    printf("\n");

    while (temp)        // Traverse until NULL
    {
        printf("%d\n", temp->data); // Print current node data
        temp = temp->next;          // Move to next node
    }
    printf("\n");
}

int main(){
    int choice, data;

    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Print\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case Push:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        
        case Print:
            print();
            break;

        case Exit:
            exit(1);
            break;

        default:
            printf("Wrong choice!!\n");
            break;
        }
    }
    return 0;
}

