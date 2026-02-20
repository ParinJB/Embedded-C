//check wheather number is even or odd using (%) operator
/*#include<stdio.h>

int main(){
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Number is even!\n");
    }else{
        printf("Number is odd!\n");
    }

    return 0;
}
*/

//check wheather number is even or odd using (&) operator
/*#include<stdio.h>

int main(){
    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    if(n & 1) //checks LSB is 1 or not, eg = 0111 & 0001 = 1 means odd and for 0110 & 0001 = 0 means even
    {
        printf("it is odd!\n");
    }else{
        printf("it is even!\n");
    }

    return 0;
}
*/

//check wheather number is even or odd using (>> and <<) operator
#include<stdio.h>

int main(){
    int n, temp;

    printf("enter the number: ");
    scanf("%d", &n);

    temp = n;
    temp = temp >> 1;
    temp = temp << 1;

    if(temp == n){
        printf("it is Even!\n");
    }else printf("it is Odd!\n");

    return 0;
}