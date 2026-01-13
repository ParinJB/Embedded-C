//this example shows how lexical analyzer will work with increment operator
#include<stdio.h>

int main(){
    
    int a = 7, b = 9;
    printf("%d\n", a+++b); // because of lexical analyzer expression works like this, (a++ + b)
    return 0;
}

//this is the example of pre increment operator
#include<stdio.h>

int main(){
    
    int a = 7, b = 9;
    printf("%d\n", a + ++b); 
    return 0;
}

//this example shows which is the right way to declare the increment operator
#include<stdio.h>

int main(){
    
    int a = 7, b = 7;
    //printf("%d\n", a+++++b); // gives error
    printf("%d\n", a++ + ++b);
    //printf("%d\n", a++ - ++b); // right way to declare
    return 0;
}


// post increment
#include<stdio.h>

int main(){
    
    int a = 7;
    printf("before incrementing : %d\n",a);
    a++;
    printf("after incrementing : %d\n", a);
    return 0;
}

// pre increment
#include<stdio.h>

int main(){
    
    int a = 7;
    printf("before incrementing : %d\n",a);
    ++a;
    printf("after incrementing : %d\n", a);
    return 0;
}