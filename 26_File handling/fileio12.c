#include<stdio.h>

int main(){
    FILE *ptr;
    int status;

    ptr = fopen("write.txt", "w");  //creating file in write mode
    status = remove("write.txt"); //remove() removes the file 

    if (status == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Error: Unable to delete the file.\n"); 
    }
    fclose(ptr); //close the file
    return 0;
}