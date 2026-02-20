#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("info.txt", "r"); //creating file in read mode
    char buffer[50];
    while(fgets(buffer, sizeof(buffer), ptr) != 0) //fgets() Reads a string from a file.
    {
        printf("%s", buffer);
    }
    printf("\n");
    fclose(ptr); //close the file
    return 0;
}