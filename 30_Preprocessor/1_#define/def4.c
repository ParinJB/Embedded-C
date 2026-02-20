// 6) example of predefined macros
#include<stdio.h>

int main(){
   
    printf("Date : %s\n", __DATE__);  
    printf("Date : %s\n", __TIME__); 
    return 0;
}