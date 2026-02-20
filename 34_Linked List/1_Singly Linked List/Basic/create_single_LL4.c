#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

void linkedlisttraversal(struct node *ptr){
    while(ptr != NULL){
        printf("Elements: %d\n", ptr->data);
        ptr = ptr->link;
    }
}
int main(){

    // Declare node pointer
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    //allocate memory for nodes in the linked list in heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    //link first and second nodes
    head->data = 9;
    head->link = second;

    //link second and third node
    second->data = 8;
    second->link = third;

    //link third and fourth node
    third->data = 4;
    third->link = fourth;

    fourth->data = 7;
    fourth->link = NULL;

    linkedlisttraversal(head); //function call

    return 0;
}