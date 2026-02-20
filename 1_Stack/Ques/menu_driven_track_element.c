#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5       // Maximum size of stack

int stack_arr[MAX];     // Array to store stack elements
int first = -1;         // Index of top element initially, -1 means stack is empty

// Enumeration for menu choices
typedef enum{
    PUSH = 1, POP, PEEK, PRINT, EXIT
}Menu;

// Function to check whether stack is full
int isFull(){
    if (first == MAX - 1)
    {
        return 1;
    }else
        return 0;
}

// Function to check whether stack is empty
int isEmpty(){
    if (first == -1)        // If no elements in stack
    {
        return 1;           // Stack is empty
    }else
        return 0;           // Stack is not empty
}

// Function to push element into stack
/* This implementation keeps the top at index 0.
   So all elements are shifted to the right when pushing*/
void push(int data){
    int i;
    if (isFull())
    {
        printf("Stack overflow\n");
        exit(1);
    }
    first = first + 1;      // Increase stack size

    // Shift elements one position to the right
    for (i = first; i > 0; i--)
    {
        stack_arr[i] = stack_arr[i - 1];
    }
    stack_arr[0] = data;    // Insert new element at index 0 (top)
}

// Function to pop element from stack
int pop(){
    int i, value;
    if (isEmpty)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[0];       // Store top element

    // Shift elements one position to the left
    for (i = 0; i < first; i++)
    {
        stack_arr[i] = stack_arr[i + 1];
    }
    first = first - 1;      // Reduce stack size
    return value;
}

// Function to return top element without removing it
int peek(){
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[0];
}

//  Function to print all elements of stack 
void print(){
    int i;

    if (first == -1)    //check stack is empty or not
    {
        printf("Stack underflow\n");
        exit(1);
    }
    // Print elements from top to bottom
    for (i = 0; i <= first; i++)
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
