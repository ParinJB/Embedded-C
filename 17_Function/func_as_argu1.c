#include<stdio.h>

int add(int a, int b){
    printf("Result: %d\n", a + b);
}
int sub(int a, int b){
    printf("Result: %d\n", a - b);
}
int mul(int a, int b){
    printf("Result: %d\n", a * b); 
}

int main(){
    int choice, x, y;
    printf("enter two numbers: ");
    scanf("%d %d", &x, &y);
    int (*op[3])(int, int) = { add, sub, mul };

    printf("x = %d, y = %d\n", x, y);
    printf("Choose an operation:\n");
    printf("0: Add\n1: Subtract\n2: Multiply\n");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 3) {
        op[choice](x, y);
    } else {
        printf("Invalid choice!\n");
    }

  return 0;
}