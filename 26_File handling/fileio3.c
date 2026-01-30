#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr; //creating a file pointer
    fptr = fopen("test.txt", "r"); //creating a file in read mode

    printf("%c\n", fgetc(fptr)); //fgetc() reads a single character from a file and print it
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    
    fclose(fptr); // close the file
    return 0;
}