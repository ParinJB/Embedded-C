// 1) example of post increment operator in a variable using pointer
#include<stdio.h>

int main(){
    int x = 5;
    int *y = &x;

    printf("before the value is: %d\n", *y);
    y++; //increment the y, moves the pointer, not the value it points to, moves it forward by sizeof(int) bytes
         // gives undefind behaviour
    printf("after the value is: %d\n", *y);
    return 0;
}

// 2) example shows difference btw y++ and (*y)++ expression
#include<stdio.h>

int main(){
    int x = 5;
    int *y = &x;

    printf("before the value is: %d\n", *y);
    (*y)++; //increment the y, this expression will inc the value of x by 1 means 5 to 6
    printf("after the value is: %d\n", *y);
    return 0;
}


// 3) example
#include<stdio.h>

int main(){
    int arr[] = {8, 25, 45, 12, 6, 79};
    int *ptr = arr; // this means ptr points to the arr[0] location

    printf("value at ptr is: %d\n", *ptr); // prints 8
    ptr = ptr + 3; // this will move to the 3rd location of array
    printf("value at ptr is: %d\n", *ptr); // prints 12
    return 0;
}

// 4) example
#include<stdio.h>

int main(){
    int arr[] = {8, 25, 45, 12, 6, 79};
    int *ptr = &arr[4]; // this means ptr points to the arr[4] location

    printf("value at ptr is: %d\n", *ptr); // prints 6
    ptr = ptr - 3; // this will move to the 3rd location of array
    printf("value at ptr is: %d\n", *ptr); // prints 25
    return 0;
}

// 5) example
#include<stdio.h>

int main(){
    int arr[] = {8, 25, 45, 12, 6, 79};
    int *ptr = &arr[5]; // this means ptr points to the arr[5] location

    printf("value at ptr is: %d\n", *ptr); // prints 79
    ptr = ptr - 4; // this will move to the 1st location of array
    printf("value at ptr is: %d\n", *ptr); // prints 25
    return 0;

}

// 6) example of post decrement operator
#include<stdio.h>

int main(){
    int x = 5;
    int *y = &x;

    printf("before the value is: %d\n", *y);
    y--; //decrement the y,moves the pointer, not the value it points to, moves it downword by sizeof(int) bytes
    printf("after the value is: %d\n", *y);
    return 0;
}

// 7) example of post increment op in array
#include<stdio.h>

int main(){
    int a[] = {9, 3, 8, 1, 7, 2, 4};
    int *p = a; // means pointer points to the 0th position of array
    printf("%d\n", *p); // prints 9 as output
    p++; // this will move to the one position 
    printf("%d\n", *p); // prints 3 as output
    return 0;
}

// 8) example shows the diff btw p++ and (*p)++ 
#include<stdio.h>

int main(){
    int a[] = {9, 3, 8, 1, 7, 2, 4};
    int *p = a; // means pointer points to the 0th position of array
    printf("%d\n", *p); // prints 9 as output
    (*p)++; // this will increment the number by one 
    printf("%d\n", *p); // prints 10 as output
    return 0;
}

// 9) example of pre increment op in array using pointer, and also a diff btw ++p and ++(*p)
#include<stdio.h>

int main(){
    int q[] = {7, 3, 9, 2, 8, 4, 6};
    int *p = q;
    printf("%d\n", *p); // op is 7

    //++p; // this will move to the one position 
    //printf("%d\n", *p); //op is 3

    ++(*p); // this will increment the number by one 
    printf("%d\n", *p); //op is 8
    return 0;

}

// 10) example of pre decrement op in array using pointer, and also a diff btw --p and --(*p)
#include<stdio.h>

int main(){
    int b[] = {7, 3, 9, 2, 8, 4, 6};
    int *p = &b[5];
    printf("%d\n", *p); // op is 4
    
    //--p;  // this will move down to the one position 
    //printf("%d\n", *p);
    
    --(*p); // this will decrement the number by one 
    printf("%d\n", *p); //op is 3
    
    return 0;
}

// 11) example of post decrement in array using pointer
#include<stdio.h>

int main(){
    int b[] = {7, 3, 9, 2, 8, 4, 6};
    int *p = &b[4];
    printf("%d\n", *p); // op is 4
    
    //p--;  // this will move down to the one position 
    //printf("%d\n", *p);
    
    (*p)--; // this will decrement the number by one 
    printf("%d\n", *p); //op is 3
    
    return 0;
}
