#include<stdio.h>
#include<stdlib.h>

#define MAX 100     // Maximum size of stack

int stack_arr[MAX];     // Array to store stack elements
int top = -1;           // Top pointer of stack, -1 means stack is empty

// Function to check whether stack is full
int isFull(){
    if (top == MAX - 1)
    {
        return 1;
    }else
        return 0;
}

// Function to check whether stack is empty
int isEmpty(){
    if (top == -1)
    {
        return 1;
    }else 
        return 0;
}

// Function to push (insert) element into stack
void push(int data){
    int i;
    if (isFull())
    {
        printf("Stack overflow\n");
        exit(1);
    }
    top++;                      // Increase top
    stack_arr[top] = data;      // Store data at top position
}

// Function to pop (remove) element from stack
int pop(){
    int value;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];     // Store top element
    top--;                      // Decrease top
    return value;               // Return removed element
}

/* Function to convert decimal number to binary
   Logic:
   - Divide number by 2 repeatedly
   - Push remainder (0 or 1) into stack
   - Stack reverses order to give correct binary form
*/
void dec2bin(int n){
    while (n != 0)
    {
        push(n%2);      // Store remainder (binary digit)
        n = n/2;        // Divide number by 2
    }
    
}

// Function to print binary number
void print(){
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    while (!isEmpty())      // Print until stack becomes empty
    {
        printf("%d", pop());
    }
}

int main(){
    int dec;
    printf("Enter the decimal number: ");
    scanf("%d", &dec);

    dec2bin(dec);       // Convert decimal to binary (store in stack)
    print();            // Print binary number
    printf("\n");
    return 0;
}