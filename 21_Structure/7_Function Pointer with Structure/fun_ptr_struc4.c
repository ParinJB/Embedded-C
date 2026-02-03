#include<stdio.h>

// function to check even number
int even(int n){
    if(n % 2 == 0){
        printf("%d is even number!\n", n);
    }
}
// function to check odd number
int odd(int n){
    if(n % 2 == 1){
        printf("%d is odd number!\n", n);
    }
}
// Structure with function pointer
struct check_number
{
    int(*check)(int);
};

int main(){
    struct check_number cn;

    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    cn.check = even;
    cn.check(n);  // call the function
    cn.check = odd;
    cn.check(n);  // call the function

    return 0;
}
