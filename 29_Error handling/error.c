#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    if(ptr == NULL){
        //printf("error opening file!\n"); // just prints this msg

        //when we want more details about what went wrong, you can use the perror() function.
        perror("error opening file!");
        return 1;
    }
    fclose(ptr);
    return 0;
}