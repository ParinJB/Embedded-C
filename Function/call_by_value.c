// call by value means passing the copies or values of variables to the another variables
// 1) example of call by value in function
/*#include<stdio.h>

int fun(int x, int y){
    x = 10;
    y = 15; 
}

int main(){
    int p = 8, q = 9;
    int x; int y;
    
    printf("before calling function p = %d and q = %d\n", p, q);

    fun(x, y);

    printf("after calling function p = %d and q = %d\n", p, q);
    return 0;
}

// 2) another example of call by value
#include<stdio.h>

int fun(int p, int q){
    p = 10;
    q = 15; 
}

int main(){
    int p = 8, q = 9;
    printf("before calling function p = %d and q = %d\n", p, q);
    fun(p, q);
    printf("after calling function p = %d and q = %d\n", p, q);
    return 0;

}*/

// 3) another example
#include<stdio.h>

int newValue(int q){
    q += 10;
}

int main(){
    int p = 7;

    printf("before function call: %d\n", p);
    newValue(p);
    printf("after function call: %d\n", p);
    return 0;
}