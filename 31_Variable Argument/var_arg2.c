//Average of numbers

#include <stdio.h>
#include <stdarg.h>

float average(int count, ...) {
    va_list args;
    va_start(args, count);

    int sum = 0;
    for(int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);
    return (float)sum / count;
}

int main() {
    printf("%.2f\n", average(4, 10, 20, 30, 40)); // Output: 25.00
}