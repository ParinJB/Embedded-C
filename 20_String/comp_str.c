// example shows how to compare string without using inbuilt function
#include<stdio.h>
#include<string.h>

int main(){
    char str1[] = "Hello";
    char str2[] = "Hola";

    if(str2 > str1){
        printf("string2 %s is greater than string1 %s!!\n", str2, str1);
    }else{
        printf("string1 %s is greater than string2 %s!!\n", str1, str2);
    }
    return 0;
}