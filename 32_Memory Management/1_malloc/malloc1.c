#include<stdio.h>
#include<stdlib.h>

int main(){
    char *v = (char*)malloc(sizeof(char));
    *v = 'A';
    // Print the value and the size of the allocated memory
    printf("Value of dynamically allocated char: %c\n", *v);
    printf("Size of dynamically allocated char: %zu bytes\n", sizeof(*v));

    // Free the dynamically allocated memory
    free(v);
    return 0;
}