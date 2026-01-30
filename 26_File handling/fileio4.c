#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w"); //creating a file in write mode

    fputc('M', fptr); //fputc() Writes a single character to a file.
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);
    
    fclose(fptr); //close the file
    return 0;
}