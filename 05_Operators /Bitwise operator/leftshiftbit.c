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

