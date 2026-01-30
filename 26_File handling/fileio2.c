#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr; //creating file pointer
    fptr = fopen("test.txt", "a"); //creating file in a append mode, in append mode 
    //the old text which is in the file will not be removed or changed but 
    //the new text will be in there with the old text

    fprintf(fptr, "%c", 'M'); //prints these characters right after the old text which is there in the file
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');
    
    fclose(fptr);
    return 0;
}