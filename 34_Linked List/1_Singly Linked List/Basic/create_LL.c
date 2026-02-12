#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

int main(){

    // Declare node pointer
    struct node *head = NULL;

    // Allocate memory for each node
    head = (struct node*)malloc(sizeof(struct node));

    // Assign data and link nodes
    head -> data = 89;
    head -> link = NULL;

    printf("%d\n", head -> data);
    return 0;
}