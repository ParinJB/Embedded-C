#include<stdio.h>
#include<stdlib.h>

// Define a structure for Queue
struct queue
{
    int size;   // Maximum size of the queue
    int front;  // Index of the front element
    int rear;   // Index of the rear element
    int *arr;   // Pointer to dynamically allocated array
};

// Function to check if queue is empty
int isEmpty(struct queue *q)
{
    // Queue is empty when front and rear are equal
    if (q->rear == q->front)
    {
        return 1;   // Return 1 (true) if empty
    }
    return 0;   // Return 0 (false) if empty
}

// Function to check if queue is full
int isFull(struct queue *q)
{
    // Queue is full when rear reaches last index
    if (q->rear == q->size - 1)
    {
        return 1;   // Return 1 (true) if full
    }
    return 0;   // Return 0 (false) if full
}   

// Function to insert (enqueue) an element into queue
void enqueue(struct queue *q, int val)
{
    if (isFull(q))      // First check if queue is full
    {
        printf("Queue overflow.\n");
    }else{
        q->rear++;                  // Move rear to next position
        q->arr[q->rear] = val;      // Insert value at rear
    }
}

// Function to remove (dequeue) an element from queue
int dequeue(struct queue *q)
{
    int a = -1; // Default value if dequeue fails

    if (isEmpty(q))
    {
        printf("This queue is empty.\n");
    }
    else{
        q->front++;             // Move front to next position
        a = q->arr[q->front];   // Store the dequeued value
    }
    return a;       // Return removed element (or -1 if empty)
}

int main(){

    struct queue q;     // Declare queue variable
    q.size = 100;       // Set maximum size of queue
    q.front = q.rear = -1;      // Initialize front and rear to -1

    q.arr = (int *)malloc(q.size*sizeof(int));      // Allocate memory dynamically

    //enqueue few elements
    enqueue(&q, 7);
    enqueue(&q, 9);
    enqueue(&q, 8);

    // Dequeue and print elements
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));

    // Check final status of queue
    if (isEmpty(&q))
    {
        printf("Queue is empty.\n");
    }
    if (isFull(&q))
    {
        printf("Queue is full.\n");
    }
    return 0;
}