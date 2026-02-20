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
    struct node *head = malloc(sizeof(struct node));
    head->data = 8;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 7;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 9;
    current->link = NULL;
    head->link->link = current;
    
    printf("%d\n%d\n", head->data, current->data);
    return 0;
}