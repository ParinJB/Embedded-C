#include<stdio.h>
#include<stdlib.h>

// Node structure for linked list
// Each node stores data and a pointer to the next node
typedef struct Nodes
{
    int data;       // Value stored in the node
    struct Nodes *next;     // Pointer to next node
}node;

// Queue structure
// It keeps track of front and rear of the linked list
typedef struct queue
{
    int currentsize;    // Number of elements in queue
    node *front;        // Points to first element
    node *rear;         // Points to last element

}queue;

// Function to traverse (print) the linked list
void linkedListTraversal(struct Nodes *ptr)
{
    printf("Printing the elements of this linked list\n");

    // Loop until pointer becomes NULL (end of list)
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data); // Print current node data
        ptr = ptr->next;         // Move to next node
    }   
    
}

// Function to create a new node
node* newNode(int data) 
{
    node* n = (node*)malloc(sizeof(node));       // Allocate memory for new node

    n->data = data;     // Assign data
    n->next = NULL;     // New node points to NULL

    return n;        // Return created node
}

// Function to create and initialize a queue
queue* createQueue() 
{
    queue* q = (queue *)malloc(sizeof(queue));   // Allocate memory for queue

    q->front = q->rear = NULL;      // Initially queue is empty
    q->currentsize = 0;      // Size is 0

    return q;   // Return created queue
}

// Check if the queue is empty
int isEmpty(queue* q) 
{
    return q->front == NULL;    // If front is NULL → queue empty
}

// Function to insert element at rear
void enqueue(queue *q, int data)
{
    node * n = newNode(data);   // Create new node

    if (isEmpty(q))     // If queue is empty
    {
        q->front = q->rear = n;    // front and rear both point to new node
    }
    else{
        q->rear->next = n;  // Link current rear to new node
        q->rear = n;     // Update rear pointer
    }   
    q->currentsize++;   // Increase queue size
}

// Function to remove element from front 
int dequeue(queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
        return -1;
    }
    node *temp = q->front;  // Store current front node

    int removedData = temp->data;   // Save data to return

    q->front = q->front->next;  // Move front to next node

     // If queue becomes empty after removal
    if (q->front == NULL) 
        q->rear = NULL;
    free(temp); // Free memory of removed node
    
    q->currentsize--;   // Decrease size
    return removedData; // Return removed value
}

// Get front element
int getFront(queue* q) 
{
    if (isEmpty(q)) 
    {
        printf("Queue is empty\n");
        return -1;
    }

    return q->front->data;       // Return data at front
}

// Get queue size
int size(queue* q) 
{
    return q->currentsize;
}

int main()
{
    queue *q = createQueue();

    enqueue(q, 7);
    enqueue(q, 8);
    enqueue(q, 9);

    // Print queue
    linkedListTraversal(q->front);

    printf("\nDequeue Element: %d\n",dequeue(q));      // Remove one element
    printf("Dequeue Element: %d\n",dequeue(q));
    printf("Dequeue Element: %d\n",dequeue(q));

    // Insert another element
    enqueue(q, 3);
    enqueue(q, 4);

    printf("\n");
    linkedListTraversal(q->front);  // Print queue

    printf("\nFront Element: %d\n", getFront(q));
    printf("Size: %d\n", size(q));

    return 0;
}