// 1) example shows how pointer works 
#include<stdio.h>

int main(){
    int x = 5;
    int *ptr = &x; //*ptr = &x means *ptr = 5, *ptr gives the value that stored at the address of x

    printf("value storded at the address of ptr is: %d\n", *ptr);
    return 0;
}

// 2) example shows we can change the value by using pointer
#include<stdio.h>

int main(){
    int x = 8;
    int *ptr = &x;
    *ptr = 7;

    printf("value stored at the ptr is: %d\n", *ptr);
    return 0;
}

// 3) example of two pointers
#include<stdio.h>

int main(){
    int a = 9;
    int *p, *q;
    p = &a;
    q = p;

    printf("%d %d\n",*p, *q); //prints the value at the address stored in pointer
    printf("%p %p\n",p, q); // prints the address of a
    return 0;
}

// 4) example
#include<stdio.h>

int main(){
    int a = 9, b = 7;
    int *p, *q;
    p = &a;
    q = &b;
    *q = *p;

    printf("%d %d\n",*p, *q);
    return 0;
}

// 5) example
#include<stdio.h>

int main(){
    int a = 9;
    int *p = &a, *q;
    q = p;
    *q = 5;
    
    printf("%d %d\n",*p, *q);
    return 0;
}