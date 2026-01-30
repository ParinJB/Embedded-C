//Variable Argument = Any number of inputs
//A variable argument function can accept different numbers of arguments every time it is called.


#include<stdio.h>
#include<stdarg.h>

double avg(int n, ...){
    va_list vl;
    double sum = 0.0;
    int i;
    va_start(vl, n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + va_arg(vl, int);
    }
    va_end(vl);

   return sum/n;
    
}

int main(){
    printf("Average of 2, 3, 4, 5 = %.2f\n", avg(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %.2f\n", avg(3, 5, 10, 15));
}