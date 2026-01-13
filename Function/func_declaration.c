// 1) example of function
/*#include<stdio.h>

char fun(); // function prototype

int main(){
    char c = fun();
    printf("character is : %c\n", c);

    return 0;
}

char fun(){
    return 'a';
}*/


// 2) example 
#include<stdio.h>

void hello(){
    printf("hello there!!!\n");
}

int square(int a){
    return a * a;
}

int main(){

    hello();
    int a;
    printf("enter the number: ");
    scanf("%d", &a);
    int result = square(a);
    printf("Square of 5 is : %d\n", result);

    return 0; 
}