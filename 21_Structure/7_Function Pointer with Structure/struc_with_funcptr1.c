#include<stdio.h>
#include<math.h>

// Typedef for the function pointer
typedef int (*mathop)(int);

//operation function
int square(int a){
    return a * a;
}
int cube(int a){
    return a * a * a;
}
int factorial(int a) {
    if (a <= 1) return 1;
    return a * factorial(a - 1);
}
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(){
    // array of function pointers
    mathop op[] = {square, cube, factorial, isPrime};
    int choice, num;

    printf("Menu:\n0 : Square\n1 : Cube\n2 : Factorial\n3 : IsPrime\n");
    printf("Enter choice (0-3): ");
    scanf("%d", &choice);

    if(choice >= 0 && choice < 4){
        printf("Enter number: ");
        scanf("%d", &num);
        // Call function using array index
        printf("Result: %d\n", op[choice](num));
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}