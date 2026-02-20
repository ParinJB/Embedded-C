#include<stdio.h>
#include<stdlib.h>

#define MAX 5       // Maximum size of stack

int stack_arr[MAX];     // Declare the maximum size of the stack
int top = -1;           // Initially, the stack is empty

// Function to push data onto the stack
void push(int data){
    if (top == MAX - 1)     // If top is at the last index, stack is full
    {
        printf("Stack overflow\n");
        return;
    }
    top = top +1;       //top will get incremented by one
    stack_arr[top] = data;     //stores value at the index 
}

// Function to pop data from the stack
int pop(){
    int value;

    if(top == -1)      // If top is -1, the stack is empty
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];     // Get the top element
    top = top - 1;          // Decrement top to remove the element
    return value;       // Return the popped value
}

// Function to print all elements of the stack
void print(){
    int i; 
    if (top == -1)      // If top is -1, the stack is empty
    {
        printf("Stack underflow\n");
        return;
    } 
    for (i = top; i >= 0; i--)      // Loop through the stack from top to bottom
    {
        printf("%d\n", stack_arr[i]);
    }
    printf("\n");
}

int main(){

    int data;

    push(1);
    push(7);
    push(8);
    push(9);
    push(4);
    data = pop();   //first pop() will remove 4
    data = pop();   //seconf pop() will remove 9
    data = pop();   //third pop() will remove 8

    print();  //function call
    printf("Removed data: %d\n", data);  // so this will print the last removed data which is 8

    return 0;
}