#include<stdio.h>

int main(){
    FILE *ptr;
    char *s = "this is a random string!!";
    ptr = fopen("text.txt", "w"); //creating file in write mode
    fputs(s, ptr); //fputs() Writes a string to a file.
    fclose(ptr); //close the file
    return 0;
}