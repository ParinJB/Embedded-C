#include<stdio.h>

typedef struct calculator
{
    float (*add)(float, float);
    float (*subtract)(float, float);
    float (*multiply)(float, float);
    float (*divide)(float, float);
    void (*display)(float result);
}cal;

float addition(float x, float y){
    printf("Addition : %.2f\n", x + y);
}
float subtract(float x, float y){
    printf("Subtract : %.2f\n", x - y);
}
float multiply(float x, float y){
    printf("Multiply : %.2f\n", x * y);
}

float divide(float x, float y){
    if (y != 0) {
        return x / y;
    } else {
        printf("Error: Division by zero\n");
        return 0; // Return 0 or handle error as appropriate
    }
}

// Function definition for displaying result
void display(float result) {
    printf("Result: %.2f\n", result);
}

// Function to initialize the calculator structure with function pointers
void init_calculator(cal* calc) {
    calc->add = addition;
    calc->subtract = subtract;
    calc->multiply = multiply;
    calc->divide = divide;
    calc->display = display;
}
int main(){
    float (*op[])(float, float) = {addition, subtract, multiply, divide};
    int choice;
    float num1, num2, result;

    printf("Menu:\n0 : Addition\n1 : Subtract\n2 : Multiply\n3 : Divide\n");
    printf("Enter choice (0-3): ");
    scanf("%d", &choice);

   if(choice >= 0 && choice < 5){
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        // Call function using array index
        result = op[choice](num1, num2);

        printf("Result: %.2f\n", result);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}