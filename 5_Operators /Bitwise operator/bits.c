/*#include<stdio.h>

int main(){
    int num;

    printf("enter the number: \n");
    scanf("%d", &num);

    if(num & 1 == 1){
        printf("%d is odd number!\n", num);
    }
    else{
        printf("%d is even number!\n", num);
    }

    return 0;
}*/

/*#include<stdio.h>

int main(){
    int num;
    int ones = 0, zeros = 0;
    int size = sizeof(int) * 2;

    printf("enter the number: \n");
    scanf("%d", &num);

    for(int i = 0; i < size; i++){
        if(num & (1 << i)){
            ones++;
        }
        else{
            zeros++;
        }
    }
    printf("number of 1's in %d: %d\n", num, ones);
    printf("number of 0's in %d: %d\n", num, zeros);

    return 0;
}*/

#include<stdio.h>

int main(){
    int n, res;

    printf("enter the number: \n");
    scanf("%d", &n);

    res = n & (n - 1);

    if(res == 0){
         printf("%d is a power of 2.\n", n);
    }
    else{
        printf("%d is not a power of 2.\n", n);
    }
}
