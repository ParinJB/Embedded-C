// examples of puts() function
// 1) example
#include<stdio.h>
#include<string.h>

int main(){
    char *k = "Hello you!!";
    puts(k);
    puts("welcome to the world!");
    return 0; 
}

// 2) example
#include <stdio.h>

int main()
{

    int num = puts("Hello there"); // storing the returned value in num
    printf("%d\n", num);
      
    return 0;
}