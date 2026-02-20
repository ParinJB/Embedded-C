//this example uses the exit() function used to terminate the calling process. 
//Use exit(0) to indicate no error, and exit(1) to indicate that the program is exiting with because of an error encountered.
// 1) example

#include<stdio.h>
#include<stdlib.h>

int main(){
    for(int i = 0; i <= 10; i++){
        if(i == 6){
            printf("\n...exiting...!!\n");
            exit(0);
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}