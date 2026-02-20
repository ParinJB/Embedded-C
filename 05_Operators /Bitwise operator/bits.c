// 1) example
#include<stdio.h>

int main(){
    int num;

    printf("enter the number: \n");
    scanf("%d", &num);

    if(num & 1 == 1) // this condition will check the last bit if it is 1 then odd else even,
                     //  for eg, 0110 is even and 0111 is odd
    {
        printf("%d is odd number!\n", num);
    }
    else{
        printf("%d is even number!\n", num);
    }

    return 0;
}