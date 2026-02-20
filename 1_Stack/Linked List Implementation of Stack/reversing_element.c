#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top = NULL;

int isEmpty(){
    if (top == NULL)
    {
        return 1;
    }else
        return 0;
}

void push(int data){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));  // Allocate memory for new node

    if (newnode == NULL)         // Check if memory allocation failed
    {
        printf("Stack overflow\n");
        exit(1);
    }
    newnode->data = data;      // Assign data to new node
    newnode->next = NULL;      

    // Since it will be inserted at top, make new node point to current top
    newnode->next = top;
    top = newnode;      // Update top to point to new node
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
    push(1);
    push(2);
    push(3);
    print();
    return 0;
}