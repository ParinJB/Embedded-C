#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r"); //creating a file in read mode

    char ch;
    ch = fgetc(fptr); //fgetc() Reads a single character from a file.
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    
    fclose(fptr); //close the file
    return 0;
}