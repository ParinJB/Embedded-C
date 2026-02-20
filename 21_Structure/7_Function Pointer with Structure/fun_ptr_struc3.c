#include<stdio.h>

// function for switch ON
void On(){
    printf("Switch is ON!\n");
}
// function for switch OFF
void Off(){
    printf("Switch is OFF!\n");
}
// Structure with function pointer
struct Switch
{
    void(*action)(void);
};

int main(){
    struct Switch swt;
    
    swt.action = On;
    swt.action();  // call the function

    swt.action = Off;
    swt.action();  // call the function
    return 0;
}