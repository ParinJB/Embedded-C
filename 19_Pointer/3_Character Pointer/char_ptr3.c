// 4) example shows how to copy string from one pointer to another
#include<stdio.h>
#include<string.h>

int main(){
    char *ptr = "Heyy You!!";
    char ptr1[50];

    strcpy(ptr1, ptr);
    
    printf("%s\n", ptr1);
    return 0;
}