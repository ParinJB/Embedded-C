#include<stdio.h>
#include<stdlib.h>

// Declare structure first
struct node
{
    int data;            // Variable to store data
    struct node *next;   // Pointer to next node
};

// Global pointers for Queue
struct node *front = NULL;  // Points to first element of queue
struct node *rear = NULL;   // Points to last element of queue

// Function to traverse (print) the linked list
void linkedListTraversal(struct node *ptr)
{
    printf("Printing the elements of this linked list\n");

    // Loop until pointer becomes NULL (end of list)
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data); // Print current node data
        ptr = ptr->next;         // Move to next node
    }   
    
}

// Function to insert element into queue (
void enqueue(int value)
{
    // Create new node dynamically
    struct node *n = (struct node *)malloc(sizeof(struct node));

    // Check if memory allocation failed
    if (n == NULL)
    {
        printf("Queue is full.\n");
    }else{
        n->data = value;    // Assign value to new node
        n->next = NULL;     // New node will be last node, so next = NULL

        // If queue is empty
        if (front == NULL)
        {
            front = rear = n;   // Both front and rear point to new node
        }else{
            rear->next = n;  // Link new node after rear
            rear = n;       // Update rear to new node
        }
        
    }
    
}

// Function to remove element from queue 
int dequeue()
{
    int value = -1;     // Default return value if queue is empty
    struct node *ptr = front;   // Temporary pointer to store front node
    if (front == NULL)
    {
        printf("Queue is empty.\n");
    }
    else{
        front = front->next;    // Move front to next node
        value = ptr->data;      // Store deleted node data
        free(ptr);              // Free memory of deleted node
    }   
    return value;    // Return removed value
}

int main()
{
    // Insert elements into queue
    enqueue(7);
    enqueue(9);
    enqueue(8);
    enqueue(4);

    // Print queue
    linkedListTraversal(front);

    printf("\nDequeuing element: %d\n", dequeue()); // Remove one element
    printf("\n");
    
    // Print queue again
    linkedListTraversal(front);

    return 0;
}