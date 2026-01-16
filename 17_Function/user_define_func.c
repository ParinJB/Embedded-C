// 1) this example has user define function called max()
// it takes two parameters and return the maximum value btw two of them
#include<stdio.h>

int max(int n1, int n2){
    int result;

    if(n1 > n2){
        result = n1;
    }else{
        result = n2;
    }
    return result;
}

int main(){

    int n1, n2, result;
    printf("enter the two numbers n1 and n2: ");
    scanf("%d %d", &n1, &n2);
    printf("comparing two numbers: \n");
    printf("%d is the greater number!\n", max(n1, n2));
    return 0;

}