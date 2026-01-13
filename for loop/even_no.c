// Print all even numbers between 1 and 20 using for loop
// Expected output: 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>

int main(){
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}