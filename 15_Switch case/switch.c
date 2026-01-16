//all examples of switch cases

// 1) example shows how to use switch cases
#include<stdio.h>

int main(){
    int n = 4;

    switch(n){
        case 1:
            printf("One\n!!");
            break; // break statement breaks the loop
        case 2:
            printf("Two!!\n");
            break;
        case 3:
            printf("Three!!\n");
            break;
        case 4:
            printf("Four!!\n");
            break;
        case 5:
            printf("Five!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;

}


// 2) example without using break
#include<stdio.h>

int main(){
    int n = 2;

    switch(n){
        case 1:
            printf("One\n!!"); //without break statement all loops will execute
        case 2:
            printf("Two!!\n");
        case 3:
            printf("Three!!\n");
        case 4:
            printf("Four!!\n");
        case 5:
            printf("Five!!\n");
        default:
            printf("Default case!!\n");
    }

    return 0;

}


// 3) example shows that we cannot use dupliate cases
#include<stdio.h>

int main(){
    int n = 2;

    switch(n){
        case 1:
            printf("One\n!!"); 
            break;
        case 1:
            printf("One!!\n");
            break;
        case 2:
            printf("Two!!\n");
        default:
            printf("Default case!!\n");
    }

    return 0;

}


// 4) another valid example
#include<stdio.h>

int main(){
    int a = 2, b = 1, c = 3, d = 5;

    switch(a + b + c){
        case 1:
            printf("One\n!!"); 
            break;
        case 6:
            printf("Six!!\n");
            break;
        case 2:
            printf("Two!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}


// 5) this is example of invalid case, float value is not allowed
#include<stdio.h>

int main(){
    float a = 2.2, b = 12.3;

    switch(a){
        case 2.2:
            printf("One\n!!"); 
            break;
        case 12.3:
            printf("Six!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}


// 6) this example is allowed
#include<stdio.h>

int main(){
    int a = 23;

    switch(a){
        case 3+3:
            printf("One\n!!"); 
            break;
        case 3+4*5:
            printf("Six!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}


// 7) another invalid example
#include<stdio.h>

int main(){
    int a = 23, b = 5, c = 6;

    switch(a){
        case b:
            printf("One\n!!"); 
            break;
        case c:
            printf("Six!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}


// 8) example
//but we can use macros so here is the valid example
#include<stdio.h>

#define b 5
#define c 6

int main(){
    int a = 23;

    switch(c){
        case b:
            printf("One\n!!"); 
            break;
        case c:
            printf("Six!!\n");
            break;
        default:
            printf("Default case!!\n");
            break;
    }

    return 0;
}


//9) example
//default can place anywhere inside the switch
#include<stdio.h>

int main(){
    int a = 23, b = 5, c = 6;

    switch(a){
        default:
            printf("Default case!!\n");
            break;
        case 5:
            printf("One\n!!"); 
            break;
        case 6:
            printf("Six!!\n");
            break;
        
    }

    return 0;
}


// 10) example of calculator using switch case
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    char choice;

    printf("Enter the Operator (+,-,*,/,%%)\n");
    scanf("%c", &choice);

    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);

    switch (choice) {
    case '+':
        printf("%d + %d = %d\n", x, y, x + y);
        break;

    case '-':
        printf("%d - %d = %d\n", x, y, x - y);
        break;

    case '*':
        printf("%d * %d = %d\n", x, y, x * y);
        break;
    case '/':
        printf("%d / %d = %d\n", x, y, x / y);
        break;
    case '%':
        printf("%d %% %d = %d\n", x, y, x % y);
        break;
    default:
        printf("Invalid Operator Input\n");
    }
  
    return 0;
}


// 11) example of nested switch statement
#include <stdio.h>

int main() {
    int firstOption = 2;
    
    switch(firstOption) {
        case 1:
            printf("Category 1 selected\n");

            switch(firstOption) {
                case 1:
                    printf("Option 1 selected under Category 1\n");
                    break;
                case 2:
                    printf("Option 2 selected under Category 1\n");
                    break;
                default:
                    printf("Invalid option under Category 1\n");
            }
            break;

        case 2:
            printf("Category 2 selected\n");

            // Inner switch to choose the option under category 2
            switch(firstOption) {
                case 1:
                    printf("Option 1 selected under Category 2\n");
                    break;
                case 2:
                    printf("Option 2 selected under Category 2\n");
                    break;
                default:
                    printf("Invalid option under Category 2\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}