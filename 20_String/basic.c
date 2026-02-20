// 1) example
#include<stdio.h>
#include<string.h>

int main(){
    char k[] = {'H','e','l','l','o','\0'};

    /*for(int i = 0; i < 5; i++) // loop will print all letters(characters) from 0 to 5 means a one string (Hello)
    {
        printf("%c", k[i]);
    }*/
    printf("%s", k); //prints string in one go
    printf("\n");
    return 0;
}

// 2) example shows how to print a single character
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "hello!";
    printf("%c\n", str[0]); // this will prints the single character
    return 0;
}

// 3) example that shows what is the disadvantage of using scanf for string input with whitespace
#include<stdio.h>

int main(){
    char str[20];
    printf("Enter the string: \n");
    scanf("%s", str); //scanf reads character untill the whitespace, so after the whitespace characters will not printed
    printf("You entered: \n");
    printf("%s\n", str);
    return 0;
}

// 4) example uses the "fgets" fun that shows how we can print the string with whitespace 
#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    printf("Enter the string: \n");
    
    fgets(str, 20, stdin); // by usinf fgets we can able to read characters after the whitespace also
    
    printf("You entered: \n");
    printf("%s\n", str);
    return 0;
}


// 5) example shows how to change a single character in a string
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Hello";
    printf("Before changing character:\n%s", str);
    str[0] = 'Y';
    str[5] = 'w';
    printf("\n");
    printf("After changing character:\n%s\n", str);
    return 0;
}