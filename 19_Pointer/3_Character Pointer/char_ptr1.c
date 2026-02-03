// 2) example
#include<stdio.h>

int main(){
    char k[] = "Hello, How are you?";
    char *p = k;

    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    return 0;
}