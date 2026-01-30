#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("newtest.txt", "w"); //creating a file in write mode

    char name[100];
    int age;
    float marks;
    printf("enter the name: ");
    scanf("%s", name);
    printf("enter the age: ");
    scanf("%d", &age);
    printf("enter the marks: ");
    scanf("%f", &marks);

    fprintf(fptr, "student name  : %s\n", name); //fprintf() Writes a formatted string(data) to a file
    fprintf(fptr, "student age   : %d\n", age);
    fprintf(fptr, "student marks : %.2f\n", marks);
    
    fclose(fptr); //close the file
    return 0;
}
