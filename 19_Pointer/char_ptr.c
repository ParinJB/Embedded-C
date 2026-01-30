// 1) example of character pointers
#include<stdio.h>

int main(){
    char x = 'P';
    char k[] = "How Are You?";
    char *p = &x;
    char *p1 = k;

    printf("x is: %c\n", *p);
    printf("k is: %s\n", p1);
    return 0;
}

// 2) example
#include<stdio.h>

int main(){
    char k[] = "Hello, How are you?";
    char *p = k;

    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    return 0;
}

// 3) example shows how to find string length
#include<stdio.h>
#include<string.h>

int main(){
    char *k = "Hello there!!!";
    printf("string is: %s\n", k);
    printf("string length is: %zu\n", strlen(k));
    return 0;
}

// 4) example shows how to copy string from one pointer to another
#include<stdio.h>
#include<string.h>

int main(){
    char *ptr = "Heyy You!!";
    char ptr1[50];

    strcpy(ptr1, ptr);
    
    printf("%s\n", ptr1);
    return 0;
}