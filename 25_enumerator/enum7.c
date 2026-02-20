#include<stdio.h>

enum status{
    OKAY = 1, CANCEL = 0, ALERT = 2
};

int main(){
    printf("Okay = %d\n", OKAY);
    printf("Cancel = %d\n", CANCEL);
    printf("Alert = %d\n", ALERT);
    return 0;
}