#include <stdio.h>

int square(int x) {
    return x * x;
}
// Structure that contains a function pointer
// This function takes an int and returns an int
typedef struct {
    int (*square)(int);
} Math_t;

// function that receives the structure
void calculate(Math_t m) {
    printf("Result: %d\n", m.square(4));
}

int main() {
    Math_t m;
    m.square = square;

    calculate(m); //calling the function
    return 0;
}