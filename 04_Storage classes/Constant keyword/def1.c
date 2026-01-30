// 2) example
#include<stdio.h>
#define value 789  // syntax is #define name value, now preprocessor will replace name with value

int main(){
   
    printf("value = %d\n", value);  // "value" will not replace by the number

    return 0;
}