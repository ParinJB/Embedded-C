//examples of if loop

/*#include<stdio.h>

int main(){

    int p = 100;
    
    if(p >= 50)
        printf("Event starts!!\n");

    return 0;

}*/

//example of if-else loop

/*#include<stdio.h>

int main(){

    int p = 16;
    
    if(p >= 18){
        printf("You must have licence!\n");
    }
    else{
        printf("You cannot drive!\n");
    }

    return 0;

}*/

//example of nested if-else loop

/*#include<stdio.h>

int main(){

    int p = 15;
    
    if(p >= 18){
        if(p >= 60)
            printf("You are a senior citiezen!\n");
        else
            printf("You are young!\n");
    }
    else{
        printf("You are not an adult!\n");
        if(p <= 13)
            printf("You are a kid!\n");
        else
            printf("Go to school!\n");
    }

    return 0;

}*/

// example of if-else ladder
#include<stdio.h>

int main(){
    int n = 26;

    if(n == 15)
        printf("Please wait for three years!\n");
    else if(n == 20)
        printf("You are eligible!\n");
    else if(n == 25)
        printf("You can vote!!\n");
    else
        printf("Sorry, your age is not valid here!!\n");

    return 0;
}
