#include<stdio.h>

enum num{
    a, b = 7, c, d = 9, e, k = 8
};
int main(){
    printf("a : %d\n",a);
    printf("b : %d\n",b);
    printf("c : %d\n",c);
    printf("d : %d\n",d);
    printf("e : %d\n",e);
    printf("k : %d\n",k);
    return 0;
}