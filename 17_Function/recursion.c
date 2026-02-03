// recursion means a function calls itself directly or indirectly until a specific base condition is met.
// It breaks a problem into smaller, identical subproblems until it hits a base case
// solves complex numbers, simple
// 1) example of recursion

#include<stdio.h>

void rec(int n){
    if(n == 10)
    return;
    printf("recursion level %d\n",n);
    rec(n + 1);
}

int main(){ 
    rec(1);  //it will starts from the number declare inside the()
    return 0;

}