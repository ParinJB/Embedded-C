// example includes getchar()
// 1) example
/*#include<stdio.h>
#include<string.h>

int main(){
    int a;
    a = getchar(); // it only takes one input character, only single character 

    printf("The entered character is : %c\n", a);
    return 0;
}

// 2) example
// C program to implement putchar
#include <stdio.h>

// Driver code
int main()
{
    int a;
    printf("Enter any random character between a-z: ");
    a = getchar(); // it only takes one input character, only single character

    printf("The entered character is : ");
    putchar(a);  // used to output (print) a single character
    printf("\n"); 
    return 0;
}*/

// 3) example 
//Reading multiple characters using getchar() 
#include<stdio.h>
#include<string.h>

int main()
{
    int s = 13;
    int x;
    while (s--) {
        x = getchar();
        putchar(x);
    }
    return 0;
}