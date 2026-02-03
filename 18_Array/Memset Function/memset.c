// C program to demonstrate working of memset()
#include<stdio.h>
#include<string.h>

int main(){
    char a[100] = "this is a random string which is created for example!!";

    printf("Before using memset function:\n%s\n", a);

    memset(a + 16, '.', 16*sizeof(char));

    printf("After using memset function:\n%s\n", a);
    return 0;
}
