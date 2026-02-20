#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef enum{
    PUSH = 1, PRINT, REVERSE, QUIT
}Menu;

int isEmpty(struct node **top)
{
    if (*top == NULL)
    {
        return 1;
    }else
        return 0;
    
}

void push(int data, struct node **top1)
{
    struct node *newnode;

    newnode = malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Stack overflow\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;

    newnode->next = *top1;
    *top1 = newnode;
}

// Function to remove (pop) the top element from stack
// top is passed as double pointer so we can modify original top
int pop(struct node **top)
{
    struct node *temp;      // Temporary pointer to hold top node
    int value;       // Variable to store popped value

    if (isEmpty(top))
    {
        printf("Stack overflow\n");
        exit(1);
    }
    temp = *top;        // Store current top node
    value = temp->data;     // Save its data

    *top = (*top)->next;    // Move top to next node
    free(temp);
    temp = NULL;
    return value;
}

// Function to reverse a stack using two temporary stacks
void reverse_stack(struct node **top)
{
    struct node *top1 = NULL;
    struct node *top2 = NULL;

    //  Move all elements from original stack to top1
    while (*top != NULL)
    {
        push(pop(top), &top1);
    }
    
    // Move all elements from top1 to top2
    while (top1 != NULL)
    {
        push(pop(&top1), &top2);
    }

    //  Move all elements from top2 back to original stack
    while (top2 != NULL)
    {
        push(pop(&top2), top);
    }
}

void print(struct node **top)
{
    struct node *temp;
    temp = *top;

    if (isEmpty(top))
    {
        printf("Stack underflow\n");
        exit(1);
    }

    printf("The stack elements are: ");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    int choice, data;
    
    struct node *top = NULL;

    while (1)
    {
        printf("\n1. Push\n");
        printf("2. Print\n");
        printf("3. Reverse the stack\n");
        printf("4. Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case PUSH:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data, &top);
            break;
        
        case PRINT:
            print(&top);
            break;

        case REVERSE:
            reverse_stack(&top);
            printf("Stack is reversed\n");
            break;

        case QUIT:
            exit(1);
            break;

        default:
            printf("Wrong choice!\n");
            break;
        }
    }
    return 0;
}