#include<stdio.h>

//function of multilpy the number by 2
int multiplytwo(int x){
    return x * 2;
}

//function of multilpy the number by 3
int multilpythree(int x){
    return x * 3;
}

// Structure that contains a function pointer
typedef struct
{
    int(*action)(int);
}act;

int main(){
    act a;
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    a.action = multiplytwo;
    printf("%d * 2 : %d\n",n, a.action(n)); //call the function
    
    a.action = multilpythree;
    printf("%d * 3 : %d\n",n, a.action(n)); //call the function
    return 0;
}
