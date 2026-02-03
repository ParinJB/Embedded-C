#include<stdio.h>
#include<string.h>

int compare(char *, char *);

int main(){
    char a[] = "BATMAN";
    char b[] = "BALL";
    int res = compare(a, b);
    return 0;
}

int compare(char *x, char *y){
    if(strlen(x) > strlen(y)){
        printf("length of string a is greater than b!!\n");
    }else{
        printf("length of string b is greater than a!!\n");
    }
    return 0;
}