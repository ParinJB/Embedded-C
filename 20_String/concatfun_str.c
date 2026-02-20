// 1) example
#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    char d[100];

    strcpy(s, "welcome to ");
    strcpy(d, "the world");
    strcat(s, d);
    printf("%s\n", s); 
    return 0;
    
}

// 2) example
#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    char d[100];

    strcpy(s, "welcome to ");
    strcpy(d, "the world");
    //strncat(s, d, sizeof(s) - strlen(s) - 1);
    strncat(s, d, 4); // we can select how many characters we want to print
    printf("%s\n", s); 
    return 0;
    
}