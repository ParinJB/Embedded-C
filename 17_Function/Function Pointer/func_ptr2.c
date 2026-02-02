#include<stdio.h>

int adition(int a, int b); // function declare, function prototype

int main(){
    int (*fp)(int, int); // delcare a function pointer
    
    //assign to adition()
    fp = adition; // function name itself behaves like a constant function pointer
    //fp = &adition; // both are same

    int a, b;
    printf("enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d\n", fp(a, b)); // call through function pointer
    return 0;
}

int adition(int a, int b){
    return a + b;
}