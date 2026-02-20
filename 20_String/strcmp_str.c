// example shows how to compare string without using inbuilt function
// 1) example
#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Hello";
    char str2[] = "Hello";

    int res = strcmp(str1, str2); //compares strings character by character using ASCII values.
    printf("strcmp result = %d\n", res);

    if(res < 0){
        printf("str1 is less than str2\n");
    } else if(res > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }
    return 0;
}