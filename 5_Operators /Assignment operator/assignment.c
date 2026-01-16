//Assignment operators:- =, +=, -=, *=, /=, %= ,<<=, >>=, &=, |=, ^=,  

#include<stdio.h>

int main(){
    int x = 3; 
    x += 4;    
    printf("%d\n", x); 

    return 0;
}

#include<stdio.h>

int main(){
    int x = 8; 
    x -= 4;    
    printf("%d\n", x); 

    return 0;
}

#include<stdio.h>

int main(){
    int a = 25, b = 5; 
    printf("a = b : %d\n", a = b);
    printf("%d\n", a);
    printf("a += b : %d\n", a += b);    
    printf("a -= b : %d\n", a -= b);
    printf("a *= b : %d\n", a *= b);
    printf("a /= b : %d\n", a /= b);
    printf("a %%= b : %d\n", a %= b);
    printf("a &= b : %d\n", a &= b);
    printf("a |= b : %d\n", a |= b);
    printf("a ^= b : %d\n", a ^= b);
    printf("a <<= b : %d\n", a <<= b);
    printf("a >>= b : %d\n", a >>= b);
    

    return 0;
}
