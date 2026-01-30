#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr; //creating a file pointer
    fptr = fopen("test.txt", "w"); //creating file in write mode

    //fprintf() − Writes a formatted string (data) to a file.
    fprintf(fptr, "%c", 'M'); //changing the characters in that file
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    
    fclose(fptr); //close the file
    return 0;
}