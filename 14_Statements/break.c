// 1) example of break statement
#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if(n < 0)
        break;  //this statement will break the loop when integer is negative
        printf("enter a number\n");
        scanf("%d\n", &n);
    }
    return 0;
}


// 2) example 
#include<stdio.h>

int main(){
    for(int i = 0; i <=10; i++){
        if(i == 3){
            break; // exit the loop when i = 3
        }
        printf("%d ", i);
    }
    return 0;
}