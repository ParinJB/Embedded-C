#include<stdio.h>

int main(){
    FILE *f = fopen("newfilet.txt", "w");
    fprintf(f, "hello new you!");
    while (fgetc(f) != EOF);
    
    if(feof(f)){
        printf("EOF ancounter \n");
    }
    
  	// Reset EOF using clearerr
    clearerr(f);
    if(!feof(f)){
        printf("Reset the EOF successfully");
    }
    printf("\n");
    fclose(f);
    return 0;
}