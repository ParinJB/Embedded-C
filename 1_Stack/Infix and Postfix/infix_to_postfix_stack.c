#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100     // Maximum size for stack and expressions

char stack[MAX];        // Stack to store operators
char infix[MAX], postfix[MAX];      // Arrays to store infix and postfix expressions
int top = -1;       // Stack top pointer (initially empty)

// Function declarations
void push(char);
char pop();
int isEmpty();
void inToPost();
int space(char);
void print();
int precedence(char);


int main(){

    printf("Enter the infix expression: ");
    fgets(infix, MAX, stdin);       // Read full line including spaces

    inToPost();     // Convert infix expression to postfix
    print();        // Print postfix expression
    return 0;
}

void inToPost(){
    int i, j = 0;       // i for scanning infix, j for building postfix
    char symbol, next;  // symbol = current character, next = popped operator

    // Traverse the infix expression
    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];      // Read current character

        //if symbol is not a whitespace
        if (!space(symbol))
        {
            switch (symbol)
        {
        case '(':
            push(symbol);       // If opening bracket, push to stack
            break;
        
        case ')':
            // Pop from stack until '(' is found
            while ((next = pop()) != '(')
            {
                postfix[j++] = next;
            }
            break;

         // If operator
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
            // Pop operators from stack with higher or equal precedence
            while (!isEmpty() && precedence(stack[top]) >= precedence(symbol))
            {
                postfix[j++] = pop();
            }
            push(symbol);       // Push current operator to stack
            break;

        default:   //if the symbol is an operand
            postfix[j++] = symbol;   // If operand (A, B, 1, 2, etc.), directly add to postfix
            break;
        }   
      }

    }
    // Pop remaining operators from stack
    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';      // Add string terminator
}

// Function to check if character is space or tab
int space(char c)
{
    //if symbol is a blank space or tab
    if (c == ' ' || c == '\t')
    {
        return 1;       // It is whitespace
    }else
        return 0;       // not whitespace
}

// Function to return precedence of operators
int precedence(char symbol){

    switch (symbol)
    {
        //higher value means greater precedence
    case '^':
        return 3;       // Exponent operator → Highest precedence
    
    case '/':
    case '*':
        return 2;        // Multiplication and Division → Medium precedence
    case '+':
    case '-':
        return 1;       // Addition and Subtraction → Lowest precedence

    default:
        return 0;
    }
}

// Function to print postfix expression
void print(){
    int i = 0;
    printf("The postfix expression is: \n");

    // Print until null character
    while (postfix[i])
    {
        printf("%c", postfix[i++]);
    }
    printf("\n");
}

// Push element into stack
void push(char c){

    // Check if stack is full
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return;  //iindicate the end of the function
    }
    top++;      // Move top pointer one position up
    stack[top] = c;     // Store the new element at the top
}

// Pop element from stack
char pop(){
    char c;

    // Check if stack is empty
    if (top == -1)
    {
        printf("stack underflow\n");
        exit(1);
    }
    c = stack[top];     // Get the top element
    top = top -1;       // Move top pointer one position down, Decrease top pointer
    return c;
}

// Function to check if stack is empty
int isEmpty(){
    if (top == -1)
    {
        return 1;
    }else
        return 0;
}