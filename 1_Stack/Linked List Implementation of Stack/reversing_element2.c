#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *top){
    if (top == NULL)
    {
        return 1;
    }else
        return 0;
}

struct node *push(int data, struct node *top)
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

    newnode->next = top;
    top = newnode;
    return top;
};

struct node *pop(struct node *top)
{
    struct node *temp;
    if (isEmpty(top))
    {
        printf("Stack underflow\n");
        exit(1);
    }
    temp = top;
    top = top->next;
    return temp;
};

void print(struct node *top){
    struct node *temp;
    temp = top;
    if (isEmpty(top))
    {
        printf("Stack underflow\n");
        exit(1);
    }
    printf("The stack elements are: \n");

    while (temp)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    struct node *top = NULL;
    struct node *top1 = NULL;
    struct node *top2 = NULL;
    struct node *temp;

    top = push(7, top);
    top = push(8, top);
    top = push(9, top);
    top = push(4, top);
    //top = push(3, top);
    print(top);
    
    temp = pop(top);
    top = temp->next;
    top1 = push(temp->data, top1);
   
    temp = pop(top);
    top = temp->next;
    top1 = push(temp->data, top1);

    temp = pop(top);
    top = temp->next;
    top1 = push(temp->data, top1);

    temp = pop(top);
    top = temp->next;
    top1 = push(temp->data, top1);
    
    //print(top);
    print(top1);
    return 0;
}