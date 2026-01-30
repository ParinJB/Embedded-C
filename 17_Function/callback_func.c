#include<stdio.h>

// Callback function to compare two numbers
int comp(int a, int b){
    if(a > b) return a;
    return b;
}
// Function that accepts a callback for comparison
void max(int (*callback)(int, int), int x, int y){
    
    // Calls the callback function
    int res = callback(x, y);
    printf("given numbers are: %d, %d\n", x, y);
    printf("%d is greater\n", res);

}
int main(){
    int x = 8, y = 9;
    max(comp, x, y);  // Pass the compareNumbers function as callback
    return 0;
}