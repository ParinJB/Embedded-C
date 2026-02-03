//this is the example of local variable means which is declare inside the main(), inside the block{}
#include<stdio.h>

int main(){

    int a = 89;
    {
        int a = 9;
        printf("%d\n", a); // this will prints the 9

    }
    printf("%d\n", a); // and this will prints 89

    return 0;
}


