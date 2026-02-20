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

struct node *push(int data, struct node *top){
    
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
}

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

    top = push(1, top);
    top = push(2, top);
    top = push(3, top);

    print(top);
    return 0;
}
