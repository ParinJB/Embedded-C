#include<stdio.h>
#include<stdlib.h>

#define MAX 50      // Maximum size of the stack


int stack_arr[MAX];     // Array to store stack elements
int top = -1;       // Top pointer of stack (initialized to -1 meaning stack is empty)

// Function to check if stack is full 
int isFull(){
    if (top == MAX - 1)     // If top reaches last index
    {
        return 1;       // Stack is full
    }else
        return 0;       // Stack is not full
}

// Function to check if stack is empty
int isEmpty(){
    if (top == -1)      // If top is -1
    {
        return 1;       // Stack is empty
    }else 
        return 0;       // Stack is not empty
}

// Function to push (insert) an element into stack 
void push(int n){
    int i;
    if (isFull())    // Check for overflow condition
    {
        printf("Stack overflow\n");
        exit(1);
    }
    top++;                  // Increment top
    stack_arr[top] = n;     // Insert element at new top position
}

// Function to pop (remove) an element from stack
int pop(){
    int value;
    if (isEmpty())      // Check for underflow condition
    {
        printf("Stack underflow\n");
        exit(1);
    }
    value = stack_arr[top];     // Store top element
    top--;                      // Decrement top
    return value;               // Return removed element
}

// Function to find and print prime factors of a number
void prime_fact(int num)
{
    int i = 2;              // Start checking divisibility from 2, first prime number
    while (num != 1)        // Continue until number becomes 1
    {
        while (num % i == 0)        // If i is a factor of num
        {
            push(i);        // Push factor into stack
            num = num / i;  // Divide num by i
        }
        i++;        // Move to next possible factor
    }
    printf("Prime factors of the number in descending order are as follow: \n");

     // Pop all elements from stack, this prints factors in reverse order
    while (top != -1)
    {
        printf("%d ", pop());
    }
        
}

int main(){
    int number;
    printf("Please enter the positive number: ");
    scanf("%d", &number);

    prime_fact(number);     // Call function to calculate prime factors
    printf("\n");
    return 0;
}
