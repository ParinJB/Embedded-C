// 1) example of right half pyramid pattern
#include<stdio.h>

int main(){
    for(int i = 0; i <= 5; i++){
        for(int j = 0; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


// 2) same example 
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}


// 3) example of full pyramid pattern
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 2 * (n - i - 1); j++)
            printf(" ");

        for (int k = 0; k <= 2 * i + 1; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}


// 4) example of upside down pyramid pattern
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
}


// 5) example of left half pyramid pattern
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 2 * (n - i) - 2; j++)
            printf(" ");

        for (int k = 0; k <= i; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}


// 6) example of left half pyramid pattern
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < 2 * (n - i) - 2; j++)
            printf(" ");

        for (int k = 0; k <= i; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}


// 7) example
#include<stdio.h>

int main(){
    int n = 5;

    for(int i = 0; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
