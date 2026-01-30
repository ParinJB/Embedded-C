// 1) example shows how to find the string length without using inbuilt function
#include<stdio.h>
#include<string.h>

int main(){
    char k[] = "This is the string!";
    int count = 0;

    for (int i = 0; k[i] != '\0'; i++) {
        count++;
    }

    printf("Length = %d\n", count);
    return 0;
}