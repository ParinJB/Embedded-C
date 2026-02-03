// 3) example shows how to find string length
#include<stdio.h>
#include<string.h>

int main(){
    char *k = "Hello there!!!";
    printf("string is: %s\n", k);
    printf("string length is: %zu\n", strlen(k));
    return 0;
}