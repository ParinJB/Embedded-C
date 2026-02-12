#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

int main(){

    // Declare node pointers and  Allocate memory for each nodes
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 79;
    head->link = NULL;

    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    printf("%d\n%d\n", head->data, current->data);
    return 0;
}
