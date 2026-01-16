///***this example shows how global variable works with local variable also***///
#include<stdio.h>

int fun();
int var = 7; // this is the global declaration

int main(){

    int var = 8;
    printf("%d\n", var); // this will prints 8 as a output
    fun();

    return 0;
}

int fun(){
    printf("%d\n", var); // this will prints 7 as a output
}


///*this example shows that we can use or access this global variable anywhere in the program***///
#include<stdio.h>

int fun();
int var = 7; // this is the global declaration

int main(){

    //int var = 8;
    printf("%d\n", var); // this will prints 7 as a output
    fun();

    return 0;
}

int fun(){
    printf("%d\n", var); // this will prints 7 as a output
}


////***another example of global variable***/// 
#include<stdio.h>

int a, b;

void add(){
    printf("%d\n", a + b);
}

int main(){
    a = 8;
    b = 9;
    add();

    return 0;
}