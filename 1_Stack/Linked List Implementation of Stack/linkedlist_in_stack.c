#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top = NULL;

// Enumeration for menu choices
typedef enum{
    PUSH = 1, POP, PEEK, PRINT, EXIT
}Menu;

int isEmpty(){
    if (top == NULL)
    {
        return 1;
    }else
        return 0;
}

void push(int data){
    struct node *newnode;

    newnode = malloc(sizeof(struct node));

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

int pop(){
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

int peek(){

    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return top->data;
}

void print(){
    struct node *temp;
    temp = top;

    if (isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    printf("The stack elements are:\n");

    while (temp)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
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

