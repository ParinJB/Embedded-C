#include<stdio.h>
#include<stdlib.h>

#define MAX 4       // Maximum size of the stack

int stack_arr[MAX];  // Declare the stack array and the top pointer
int top = -1;        // Initially, the stack is empty

typedef enum{
    PUSH = 1, POP, PEEK, PRINT, EXIT
}Menu;

// Function to check if the stack is full
int isFull(){
    if (top == MAX - 1)   // If top is at the last index, stack is full
    {
        return 1;
    }else 
        return 0;      // Otherwise, stack is not full
}

// Function to check if the stack is empty
int isEmpty()
{
    if (top == - 1)     // If top is -1, the stack is empty
    {
        return 1;
    }else
    {
        return 0;       // Stack has elements
    }    
}

// Function to push data onto the stack
void push(int data)
{
    if (isFull())    // Check if the stack is full
    {
        printf("Stack overflow\n");
        return;
    }
    top = top + 1;          // Increment top
    stack_arr[top] = data;  // Add data to the stack at the top
}

// Function to pop data from the stack
int pop()
{
    int value;
    if (isEmpty())    // Check if the stack is empty
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];    // Get the top element
    top = top - 1;    // Decrement top to remove the element
    return value;     // Return the popped value
}

// Function to peek at the top element of the stack without removing it
int peek()
{
    if (isEmpty())     // Check if the stack is empty
    {
        printf("Stack ovrflow\n");
        exit(1);
    }
    return stack_arr[top];   // Return the top element
}

// Function to print all elements of the stack
void print(){
    int i;  
    if (top == -1)    // If the stack is empty
    {
        printf("Stack underflow\n");
        return;
    }
    for (i = top; i >= 0; i--)    // Loop through the stack from top to bottom
    {
        printf("%d\n", stack_arr[i]);
    }
    printf("\n");
}

int main(){
    int choice, data;
    while (1)     // Infinite loop to keep prompting for stack operations
    { 
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");

        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case PUSH:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);   // Call push function
            break;
        
        case POP:
            data = pop();  // Call pop function
            printf("Deleted element is %d\n", data);
            break;

        case PEEK:
            printf("The topmost element of the stack is %d\n", peek());
            break;

        case PRINT:
            print();  // Print all elements in the stack
            break;

        case EXIT:
            exit(1);   // Terminate the program
            break;
        
        default:
            print("Wrong choice!!\n");
            break;
        }
    }
    return 0;
}
