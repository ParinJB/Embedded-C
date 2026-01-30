// example of extern modifier
#include<stdio.h>

extern int a; //we can access the variable from another file by using this extern keyword

int main(){

    printf("%d\n", a);
    return 0;
}
