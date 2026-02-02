#include<stdio.h>

void greetmorning(){
    printf("Good Morning!!\n");
}
void greetevening(){
    printf("Good Evening!!\n");
}
void greet(void(*fun)()){
    fun();
}
int main(){
    greet(greetmorning);
    greet(greetevening);
    return 0;
}