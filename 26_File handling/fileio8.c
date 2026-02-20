// example of printing odd numbers till n
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Odd_num.txt", "w"); //creating file in write mode

    int n;
    printf("enter the number till you want the odd numbers: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 != 0){
            fprintf(fptr, "%d\n", i); //fprintf() Writes a formatted string (data) to a file
        }
    }
    fclose(fptr); //close the file
    return 0;
}