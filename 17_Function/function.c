// 1) example of function declaration
#include<stdio.h>

int areOfRect(int breadth, int length); // this is the function declaration

int main(){
    int l = 10, b = 5;
    int area = areOfRect(l, b); // this is the fuction call
    printf("Area of the rectangle is : %d\n", area);

    l = 40, b = 50;
    area = areOfRect(l, b); // this is the fuction call again
    printf("Area of the rectangle is : %d\n", area);

    return 0;
}
int areOfRect(int breadth, int length) // this is the function definition
{
    int area;
    area = length * breadth;
    return area;
}