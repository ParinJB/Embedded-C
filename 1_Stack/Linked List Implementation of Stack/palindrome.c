#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

}*top = NULL;

int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }else
        return 0;
}

void push(int data)
{
    struct node *newnode;

    newnode = malloc(sizeof(newnode));

    if (newnode == NULL)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;

    newnode->next = top;
    top = newnode;
}

int pop()
{
    struct node *temp;
    int value;
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    temp = top;
    value = temp->data;

    top = top->next;
    free(temp);
    temp = NULL;
    return value;
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return top->data;
}

// Function to check whether a string is palindrome
// Format expected first_half X second_half
// Example: "abcXcba"
void palindrome_check(char *s)
{
    int i = 0;
    while (s[i] != 'X')     // Push all characters before 'X' into the stack
    {
        push(s[i]);     // Store character in stack
        i++;    // Move to next character
    }
    i++;        // Skip the separator 'X'

    while (s[i])         // Compare remaining characters with stack (reverse order)
    {
        // Loop until end of string ('\0')
        if (isEmpty() || s[i] != pop())     // If stack is empty OR characters don't match
        {
            printf("Not a palindrom!\n");
            exit(1);
        }
        i++;       // Move to next character
 
    }
    printf("Palindrom!\n");
}

int main(){

    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);

    palindrome_check(s);
    return 0;
}