//In a linear queue, once rear reaches the end, space at the beginning cannot be reused
//but in circular queue we can use that spaces, makes the queue behave like a circle
//allowing reuse of empty spaces.

#include<stdio.h>
#include<stdlib.h>

// Structure definition for Circular Queue
struct circularQueue
{
    int size;       // Maximum size of queue
    int front;      // Points to position before first element
    int rear;       // Points to last inserted element
    int *arr;       // Dynamically allocated array
};

// Function to check if queue is empty
int isEmpty(struct circularQueue *q)
{
    // Queue is empty when front and rear are equal
    if (q->rear == q->front)
    {
        return 1;       // Return true (1)
    }
    return 0;       // Return false (0)
}

// Function to check if queue is full
int isFull(struct circularQueue *q)
{
    // Queue is full when next position of rear equals front
    // (rear + 1) % size makes it circular
    if ((q->rear + 1)%q->size == q->front)
    {
        return 1;       // Return true (1)
    }
    return 0;       // Return false (0)
}

// Function to insert element into circular queue
void enqueue(struct circularQueue *q, int value)
{
    if (isFull(q))      // Check if queue is full
    {
        printf("Queue is full.\n");
    }
    else{
        
         // Move rear circularly
        q->rear = (q->rear + 1)%q->size;

        // Insert value at new rear position
        q->arr[q->rear] = value;

        printf("Enqued element: %d\n", value);
    }
}

// Function to remove element from circular queue
int dequeue(struct circularQueue *q)
{
    int a = -1;     // Default return value if queue empty

    // Check if queue is empty
    if (isEmpty(q))
    {
        printf("This queue is empty.\n");
    }
    else{

        // Move front circularly
        q->front = (q->front + 1)%q->size;

        // Store removed value
        a = q->arr[q->front];
    }
    return a;   // Return removed element
}

int main(){

    struct circularQueue q;

    q.size = 4;     // Queue size is 4
    q.front = q.rear = 0;   // Initialize front and rear to 0

    q.arr = (int *)malloc(q.size*sizeof(int));   // Allocate memory

    //enqueue few elements
    enqueue(&q, 7);
    enqueue(&q, 9);
    enqueue(&q, 8);
    enqueue(&q, 4);

    // Dequeue elements
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));

    // Insert again after dequeue (circular behavior)
    enqueue(&q, 49);
    enqueue(&q, 98);
    enqueue(&q, 87); 

    // Check final status
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