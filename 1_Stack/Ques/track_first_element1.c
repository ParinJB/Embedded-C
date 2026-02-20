//This is the example of a fix stack_arr[0], means the top element is on this stac_arr[0] position
//In this case we use pop()
//And we have to shift all elements towards left

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5       // Maximum size of stack

int stack_arr[MAX];
int first = -1;

void push(int data){
    int i;
    first = first + 1;      //incrementing value of first by 1

    for (i = first; i > 0; i--)     //loop will shift the elements toward the right
    {
        //copy the element and paste it at the index by shifting right
        stack_arr[i] = stack_arr[i - 1];  
    }
    stack_arr[0] = data;
}

// Function to pop (remove) an element from stack
int pop(){
    int i, value;
    value = stack_arr[0];   // Store top element

    // Shift elements one position to the left
    for (i = 0; i < first; i++)     
    {
        stack_arr[i] = stack_arr[i + 1];
    }
    first = first - 1;      // Reduce stack size
    return value;
}

//  Function to print all elements of stack 
void print(){
    int i;

    if (first == -1)    //check stack is empty or not
    {
        printf("Stack underflow\n");
        exit(1);
    }
    // Print elements from top to bottom
    for (i = 0; i <= first; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main(){

    int data;

    //function calls
    push(30);
    push(90);
    push(80);
    push(70);

    data = pop();  //give the value of that data which is removed

    print();  // prints all the elements
    return 0;
}