// 1) example
/*#include<stdio.h>

int main(){
    int a[][3] = {{1, 2, 3}, {4, 5, 6}}; 
    int (*ptr)[3] = a;
    printf("%d %d\n", (*ptr)[1], (*ptr)[2]); // print the 1st element and second element of first 1D array
    ++ptr; //pointer to 2nd 1D array
    printf("%d %d\n", (*ptr)[1], (*ptr)[2]); // print the 1st element and second element of second 1D array
    return 0;
}*/

// 2) example 
#include<stdio.h>

void f(int *p, int *q){
    p = q;
    *p = 2;
}

int main(){
    int i = 0, j = 1;
    f(&i, &j);
    printf("%d %d\n", i, j);
    return 0;
}