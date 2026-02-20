#include<stdio.h>
#include<string.h>

int main(){
    char string1[] = "Hello";
    char string2[50] = "";

    printf("Before using memcpy, string1 = %s and strin2 = %s \n", string1, string2);

    memcpy(&string2, &string1, sizeof(string1)); //copy the string1 into string2 using memcpy()

    printf("After using memcpy, string1 = %s and strin2 = %s \n", string1, string2);
    return 0;
}