// 1) example of #define in constant keyword
#include<stdio.h>
#define PI 3.14159  // syntax is, #define name value, now preprocessor will replace name with value

int main(){
   
    printf("%.5f\n", PI);  // here we get the value of this name PI

    return 0;
}