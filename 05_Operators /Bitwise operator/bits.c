// 1) example
#include<stdio.h>

int main(){
    int num;

    printf("enter the number: \n");
    scanf("%d", &num);

    if(num & 1 == 1) // this condition will check the last bit if it is 1 then odd else even,
                     //  for eg, 0110 is even and 0111 is odd
    {
        printf("%d is odd number!\n", num);
    }
    else{
        printf("%d is even number!\n", num);
    }

    return 0;
}

// 2) example
#include<stdio.h>

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
    printf("number of 1's in %d: %d\n", num, ones); //prints how many 1's are ther in a number
    printf("number of 0's in %d: %d\n", num, zeros); //prints how many 0's are ther in a number

    return 0;
}

// 3) example
#include<stdio.h>

int main(){
    int n, res;

    printf("enter the number: \n");
    scanf("%d", &n);

    res = n & (n - 1);

    if(res == 0) // condition will check that the number is a power of 2 or not
    {
         printf("%d is a power of 2.\n", n);
    }
    else{
        printf("%d is not a power of 2.\n", n);
    }
    return 0;
}
