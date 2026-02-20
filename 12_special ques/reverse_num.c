#include<stdio.h>

int main(){
    int num = 4568; 
    int rev_num = 0;

    printf("Given number: %d\n", num);
    
    while(num > 0){
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    printf("Reverse of the number is: %d\n", rev_num);
    return 0;
}

