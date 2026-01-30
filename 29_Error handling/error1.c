#include<stdio.h>
#include<errno.h>
#include<string.h>

int main(){
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    if(ptr == NULL){

        //strerror(errno) will convert the error code into a readable message
        printf("error: %s\n", strerror(errno)); 
        return 1;
    }
    
    fclose(ptr);
    return 0;
}