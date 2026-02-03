// 4) example shows that we can use multiple lines by using  "\"
#include<stdio.h>
#define greater(x,y) if(x > y)\
    printf("%d is greater than %d\n", x, y);\
else\
    printf("%d is lesser than %d\n", x, y);    

int main(){
   
    greater(7,9);

    return 0;
}