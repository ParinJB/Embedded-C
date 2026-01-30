#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "hello";
    int n = sizeof(s1)/ sizeof(s1[0]);

    for(int i = n - 2; i >= 0; i--){
        printf("%c", s1[i]);
    }
    printf("\n");
    return 0;
}