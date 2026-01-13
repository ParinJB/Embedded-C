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

// 2) example
#include<stdio.h>

int fun(int n){
    if(n == 1){
        return 1;
    }else{
        return 1 + fun(n - 1);
    }
}

int main(){
    int n = 5;
    printf("%d\n", fun(n));
    return 0;
}


// 3) finding a facorial using recursion function
#include<stdio.h>

int fact(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fact(n - 1);
    }
}

int main(){
    int n = 4;
    printf("factorial of a number %d = %d\n", n, fact(n));
    return 0;
}