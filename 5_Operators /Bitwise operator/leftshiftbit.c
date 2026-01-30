////////*******Examples of left shift operator*******///////
//Creating bit masks
//Setting, clearing, toggling bits
//Multiplying by power of 2
//Working with registers / flags

//example of set bit 
// 1) ex
#include<stdio.h>

int main(){
    int num, pos;

    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter the number of position: \n");
    scanf("%d", &pos);

    printf("Before set the bit of number: %d\n", num);

    num = num | (1 << pos);  // 1*(2^1)=2  means 
    /* for example num = 5 = 0101 and position = 2 so ,  0101
                                                  (OR))| 0010  
                                                     ans 0111 = 7  */

    printf("After set the bit of number: %d\n", num);

    return 0;
}

//program to toggle(compliment) a bit, we can also swap the number by using this xor operator
// 2) ex
#include<stdio.h>

int main(){
    int num, pos;

    printf("enter the number: \n");
    scanf("%d", &num);
    printf("enter the number of position: \n");
    scanf("%d", &pos);

    printf("Before toggle the bit of number: %d\n", num);

    num = num ^ (1 << pos);  /*in this for example num = 5 = 0101 and position = 2 means (1 * (2^2)) = 4 = 0100
    so,     0101 = 5
    XOR(^)  0100 = 4
        ans 0001 = 1   
    
    */

    printf("After toggle the bit of number: %d\n", num);

    return 0;
}

//program to clear the bit
// 3) ex
#include<stdio.h>

int main(){
    int num, pos;

    printf("enter the number: \n");
    scanf("%d", &num);
    printf("enter the number of position: \n");
    scanf("%d", &pos);

    printf("Before clear the bit number is: %d\n", num);

    num = num & ~(1 << pos); /* for example num = 10 = 1010 and position = 3 means, (1* (2^3)) = 8 = 1000
    so,     1010   and ~(1000) = 0111
    AND(&)  0111
        ans 0010 = 2*/

    printf("After clear the bit number is: %d\n", num);

    return 0;
}

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





 
 













/*  0000 0
    0001 1 
    0010 2 
    0011 3
    0100 4
    0101 5
    0110 6
    0111 7
    1000 8
    1001 9
    1010 10
    1011 11     
*/

