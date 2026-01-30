#include<stdio.h>

int main(){
    FILE *fptr; 
    fptr = fopen("sum.txt", "r"); //creating a file in read mode

    int a; 
    fscanf(fptr, "%d", &a); //fscanf() Reads a formatted string from a file.
    int b; 
    fscanf(fptr, "%d", &b);

    fclose(fptr); // close the file

    fptr = fopen("sum.txt", "w");
    fprintf(fptr, "%d", a + b); //fprintf() Writes a formatted string (data) to a file

    fclose(fptr); // close the file
    return 0;
}