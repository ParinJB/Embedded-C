//program to find the particular bit is set or clear
// 4) ex
#include<stdio.h>

int main(){
    int num, res, pos;

    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter the number of position: \n");
    scanf("%d", &pos);

    printf("Before checking that the bit is clear or set: %d\n", num);
    
    //res = (num >> pos) & 1; // we can also use this expression both are same

    res = num & (1 << pos); /* for example num = 11 = 1011 and position = 3 so here 
    (1*(2^3)) = 8 = 1000
            1011
    AND(&)  1000
        ans 1000 so this means 3rd bit is set
    
    for clear bit example num = 0110 = 6 and position is 3 so it is 1000
    then        0110
        AND(&)  1000
            ans 0000 , this means bit is clear

    */

    printf("After checking that the bit is clear or set: %d\n", num);

    if(res == 0){
        printf("bit is clear!\n");
    }
    else{
        printf("bit is set!\n");
    }
    
    return 0;

}