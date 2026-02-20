#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100     // Maximum size of stack and input expression

int top = -1;       // Stack top pointer (initially empty)
char stack[MAX];    // Stack to store opening brackets

// Function to check if stack is full
int isFull(){
    if (top == MAX -1)
    {
        return 1;
    }else
        return 0;
}

// Function to check if stack is empty
int isEmpty(){
    if (top == -1)
    {
        return 1;
    }else
        return 0;
}

// Function to push an element into the stack
void push(char c)
{
    if (isFull())
    {
        printf("Stack overflow\n");
        exit(1);
    }
    top++;       // Increase top pointer
    stack[top] = c;     // Insert element at top
}

// Function to pop an element from stack
char pop()
{
    char c;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    c = stack[top]; // Store top element
    top--;       // Decrease top pointer
    return c;
}

// Function to check if two brackets match
// a → opening bracket
// b → closing bracket
int match_char(char a, char b){

    if (a == '[' && b == ']')
    {
        return 1;
    }

    if (a == '{' && b == '}')
    {
        return 1;
    }

    if (a == '(' && b == ')')
    {
        return 1;
    }
    return 0;
}

// Function to check if brackets in expression are balanced
int check_balanced(char *s)
{
    int i;
    char temp;

    // Traverse the entire string
    for (i = 0; i < strlen(s); i++)
    {
        // If opening bracket, push into stack
        if (s[i] == '[' || s[i] == '{' || s[i] == '(' )
        {
            push(s[i]);
        }

        // If closing bracket
        if (s[i] == ']' || s[i] == '}' || s[i] == ')' )
        {
            if (isEmpty())
            {
                printf("Right brackets are more than the left.\n");
                return 0;
            }else{ 
                temp = pop();      //hold the popped elements, Pop last opening bracket

                // Check if popped bracket matches current closing bracket
                if (!match_char(temp, s[i]))
                {
                    printf("Mismatched brackets.\n");
                    return 0;
                }
                
            }
            
        }
        
        
    }
    // After traversal, check if stack is empty
    if (isEmpty())
    {
        printf("Brackets are well balanced.\n");
        return 1;
    }else{
        printf("Left brackets are more than right brackets.\n");
        return 0;
    }
    
}

int main()
{
    char expression[MAX];   // To store input expression
    int balanced;           // Variable to store result

    printf("Enter the algebric expression: ");
    fgets(expression, MAX, stdin);  // Read full line input

    // Call function to check balanced brackets
    balanced = check_balanced(expression);

    if (balanced == 1)
    {
        printf("The expression is valid.\n");
    }else{
        printf("The expression is invalid.\n");
    } 

    return 0;
}

