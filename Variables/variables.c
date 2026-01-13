// 1) example of how variable declares and works
#include<stdio.h>

int main(){
    int var = 3;
    var = 4;
    printf("%d", var);

    return 0;
}


// 2) example shows how we can assign one variable's value to the another variable
#include<stdio.h>

int main(){
    int var1 = 3;
    int var2;
    var2 = var1;
    printf("%d", var2);

    return 0;
}


// 3) example 
#include<stdio.h>

int main(){
    int var1, var2, var3;
    var1 = var2 = var3 = 5;
    printf("%d \n", var1);
    printf("%d \n", var2);
    printf("%d \n", var3);

    return 0;
}