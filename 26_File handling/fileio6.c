#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r"); //creating file in read mode
    int n;

    fscanf(fptr, "%d", &n); //fscanf() Reads a formatted string from a file
    printf("number : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number : %d\n", n);

    fscanf(fptr, "%d", &n);
    printf("number : %d\n", n);
    
    fclose(fptr); //close the file
    return 0;
}