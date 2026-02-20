#include<stdio.h>

enum months{
    Jan = 1, Feb, March, April,  May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int main(){
    for(int i = Jan; i <= Dec; i++){
        printf("Month number: %d\n", i);
    }
    return 0;
}