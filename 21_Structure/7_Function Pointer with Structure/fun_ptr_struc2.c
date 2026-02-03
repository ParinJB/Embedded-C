#include<stdio.h>

// function for 1st string literal
void string1(){
    printf("Hello there!\n");
}
// function for 2nd string literal
void string2(){
    printf("Welcome to the world!\n");
}

// Structure with function pointer
struct message
{
    void(*msg1)(void); 
    void(*msg2)(void);
};

int main(){
    struct message m;
    m.msg1 = string1;
    m.msg2 = string2;

    //calling the function
    m.msg1(); 
    m.msg2();
    return 0;
}
