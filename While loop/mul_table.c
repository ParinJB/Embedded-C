// example of multiplication table from 1 to 10
#include<stdio.h>

int main(){

    int i = 1;

    while(i <= 10){

        int j = 1;
        while(j <= 10){

            printf("%d ", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

