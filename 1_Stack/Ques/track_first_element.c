//This is the example of a fix stack_arr[0], means the top element is on this stac_arr[0] position
//And we have to track the position of first inserted element
//In this case we use push() 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5       // Maximum size of stack

int stack_arr[MAX];

//indicate that the stack is empty
int first = -1;      //this first variable will strores the index of first inserted element

void push(int data){
    int i;
    first = first + 1;      //incrementing value of first by 1

    for (i = first; i > 0; i--)   //loop will shift the elements toward the right
    {
        //copy the element and paste it at the index by shifting right
        stack_arr[i] = stack_arr[i - 1];  
    }
    stack_arr[0] = data;
}

void print(){
    int i;

    if (first == -1)    //check stack is empty or not
    {
        printf("Stack underflow\n");
        exit(1);
    }
    for (i = 0; i <= first; i++)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main(){

    //function calls
    push(30);
    push(90);
    push(80);
    push(70);

    print();
    return 0;
}