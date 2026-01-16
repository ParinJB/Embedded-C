// 1) example of do-while loop
#include<stdio.h>

int main(){

    int i = 0;

    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    return 0;
}


// 2) example of infinite loop
#include<stdio.h>

int main(){

    do
    {
        printf("infinite loop!!\n");
    } while (1);
    return 0;
}


// 3) example 
#include<stdio.h>

int main(){

    int i = 0, sum = 0;

    do
    {
        sum += i;
        printf("Sum is = %d\n", sum);
        i++;
    } while (i<=10);

    return 0;
}


// 4) example
#include<stdio.h>

int main(){

    int n;
    do
    {
        printf("enter any integer number:\n");
        scanf("%d", &n);
    } while (n != 0);
    printf("You are out of the loop!!\n");
    
    return 0;
}

