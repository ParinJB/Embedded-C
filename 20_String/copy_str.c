// 1) example shows how to copy the string without using inbuilt function
#include<stdio.h>
#include<string.h>

int main(){
    char s[] = "This is the string!!";
    char d[40];
    int i = 0;

    while (s[i] != '\0')
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    printf("sourse      : %s\n", s);
    printf("destination : %s\n", d);
    return 0;
    
}