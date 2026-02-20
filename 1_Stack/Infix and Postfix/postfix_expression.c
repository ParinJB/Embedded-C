#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX 100     // Maximum size for stack and expressions

// Global stack used for both conversion and evaluation
int stack[MAX];

// Arrays to store infix and postfix expressions
char infix[MAX], postfix[MAX];

int top = -1;       // Stack top pointer

// Function declarations
void push(int);
int pop();
int isEmpty();
void inToPost();
int space(char);
void print();
int precedence(char);
int postfix_evaluate();


int main(){

    int result;
    printf("Enter the infix expression: ");
    scanf("%s", infix); 

    inToPost();      // Convert infix expression to postfix
    top = -1;       // Reset stack before postfix evaluation

    result = postfix_evaluate();     // Evaluate postfix expression
    print();    // Print postfix expression

    printf("The result obtained after postfix evaluation is: ");
    printf("%d\n", result);
    return 0;
}

// Function to convert Infix expression to Postfix
void inToPost()
{
    int i, j = 0;
    char next;
    char symbol;

     // Traverse the infix expression
    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];

        //if symbol is not a whitespace
        if (!space(symbol))
        {
            switch (symbol)
            {
            case '(':
                push(symbol);   // Push '(' to stack
                break;
            
            case ')':
                while ((next = pop()) != '(')      // Pop until '(' is found
                {
                    postfix[j++] = next;
                }
                break;

            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                
                // Pop operators with higher or equal precedence
                while (!isEmpty() && precedence(stack[top]) >= precedence(symbol))
                {
                    postfix[j++] = pop();
                }
                push(symbol);   // Push current operator
                break;

            default:  //if symbol is an operand
                postfix[j++] = symbol;
                break;
            }
        }
        
    }
    // Pop all remaining operators from stack
    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';  // Null terminate postfix string

}

// Function to check if character is space or tab
int space(char c)
{
    //if symbol is a blank space or tab
    if (c == ' ' || c == '\t')
    {
        return 1;
    }else
        return 0;
}

// Function to define operator precedence
int precedence(char symbol)
{
    switch (symbol)
    {
    case '^':
        return 3;

    case '/':
    case '*':
        return 2;

    case '+':
    case '-':
        return 1;

    default:
        return 0;
    }
}

// Function to print postfix expression
void print()
{
    int i = 0;
    printf("The equivalent postfix expression is: ");

    while (postfix[i])  // Print until null character
    {
        printf("%c", postfix[i++]);
    }
    printf("\n");
}

// Push element into stack
void push(int val)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return;  // indicate the end of the function
    }
    top++;  // Increment top pointer
    stack[top] = val;   // Insert the value at the new top position
}

// Pop element from stack
int pop()
{
    int val;
    if (top == -1)
    {
        printf("Stack underflow\n");
        exit(1);
    }
    val = stack[top];   // Store the top element
    top = top - 1;  // Decrement top pointer
    return val; // Return the popped value
}

// Check if stack is empty
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }else
        return 0;
}

// Function to calculate power (b^a)
int power(int a, int b)
{
    int i, mul = 1;
    for (i = 0; i < b; i++)     // Multiply 'a' with itself 'b' times
    {
        mul *= a;
    }
    return mul;     // Return final result
}

// Function to evaluate postfix expression
int postfix_evaluate()
{
    int i;
    int a, b;

     // Traverse each character of postfix expression
    for (i = 0; i < strlen(postfix); i++)
    {
        // If current character is a digit (operand)
        if (postfix[i] >= '0' && postfix[i] <= '9')
        {
            // Convert character to integer and push to stack
            push(postfix[i] - '0');
        }else{

            // If operator, pop two operands from stack
            a = pop();       // First popped value (right operand)
            b = pop();       // Second popped value (left operand)

            switch (postfix[i])
            {
            case '+':
                push(b+a);
                break;
            
            case '-':
                push(b-a);
                break;

            case '*':
                push(b*a);
                break;

            case '/':
                push(b/a);
                break;

            case '^':
                push(power(b, a));
                break;

            default:
                break;
            }
        }
        
    }
    return pop();       // Final result will be on top of stack
}