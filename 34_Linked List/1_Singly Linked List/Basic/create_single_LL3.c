#include<stdio.h>
#include<stdlib.h>

// structure of a linked list node
struct node
{
    int data;
    struct node *link;
};

int main(){

    // Declare node pointer and  Allocate memory for each node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *second = (struct node*)malloc(sizeof(struct node));
    struct node *third = (struct node*)malloc(sizeof(struct node));

    head->data = 7;
    head->link = second;

    second->data = 9;
    second->link = third;

    third->data = 8;
    third->link = NULL;

    struct node *temp = head;   // Start from the head of the list

    while(temp != NULL)   // Traverse the list and print each node's data
    {
        printf("%d -> ", temp->data);   // Print the current node's data
        temp = temp->link;   // Move to the next node
    }
    printf("NULL\n");  // Indicate the end of the list
 
    temp = head;   // Reset temp to head to start freeing memory

    while (temp != NULL)   // Traverse the list and free each node to avoid memory leaks
    {
        struct node *link = temp->link;   // Store the next node
        free(temp);     // Free the current node
        temp = link;    // Move to the next node
    }
    return 0;
}
