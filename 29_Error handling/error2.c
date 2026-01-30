#include<stdio.h>

int main(){
    FILE *p = fopen("textfile.txt", "w");

    fprintf(p, "hello there!");
    if(ferror(p) == 0){
        printf("Data written successfully.");
    }
    printf("\n");
    fclose(p);
    return 0;
}