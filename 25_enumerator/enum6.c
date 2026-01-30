#include<stdio.h>

enum day{
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};

int main(){
    enum day today = FRIDAY;
    
    if(today == FRIDAY){
        printf("Today is Friday!!\n");
    }else
        printf("Today is another day!!\n");

    return 0;
}