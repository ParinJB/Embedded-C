#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr; //creating a file pointer
    fptr = fopen("test.txt", "r"); //creating a file in a read mode

    char ch;
    fscanf(fptr, "%c", &ch); //scan the input from the test.txt file
    printf("character : %c\n", ch); //prints the output from the file
    fscanf(fptr, "%c", &ch);
    printf("character : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character : %c\n", ch);
    fscanf(fptr, "%c", &ch);
    printf("character : %c\n", ch);
    
    fclose(fptr); //close the test.txt file
    return 0;
}