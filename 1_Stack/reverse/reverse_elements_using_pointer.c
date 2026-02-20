#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

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

int pop(struct node **top)
{
    struct node *temp;
    int value;

    temp = *top;
    value = temp->data;

    *top = (*top)->next;
    free(temp);
    temp = NULL;
    return value;
}

void print(struct node **top)
{
    struct node *temp;
    temp = *top;
    printf("The elements are: ");

    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int data;
    struct node *top = NULL;
    struct node *top1 = NULL;
    struct node *top2 = NULL;

    push(7, &top);
    push(8, &top);
    push(9, &top);

    //1) from original stack to temporary stack1
    data = pop(&top);   //pop data from the original stack top
    push(data, &top1);  //push data to the temporary stack top1

    data = pop(&top);
    push(data, &top1);

    data = pop(&top);
    push(data, &top1);
    print(&top);
    print(&top1);

    //2) from temporary stack1 to temporary stack2
    data = pop(&top1);  //pop data from the temporary stack top1
    push(data, &top2);  //push data to the temporary stack top2

    data = pop(&top1);
    push(data, &top2);

    data = pop(&top1);
    push(data, &top2);

    print(&top1);
    print(&top2);

    //3) from temporary stack2 to original stack
    data = pop(&top2);  //pop data from the temporary stack top2
    push(data, &top);   //push data to the oeiginal stack top

    data = pop(&top2);
    push(data, &top);

    data = pop(&top2);
    push(data, &top);

    print(&top2);
    print(&top);

    return 0;
}
