#include<stdio.h>

int main()
{
    int x, y;

    printf("enter the number x: \n");
    scanf("%d", &x);
    printf("enter the number y: \n");
    scanf("%d", &y);

    while (y != 0)
    {
        x++;  
        y--;
        /*these two statements works like this x = 8 y = 9
                                               x =9 y = 8 
                                               x = 10 y = 7
                                               x = 11 y = 6
                                               x = 12 y = 5
                                               x = 13 y = 4
                                               x = 14 y = 3
                                               x = 15 y = 2
                                               x = 16 y = 1
                                         ans   x = 17 y = 0  */
    }
    printf("sum of two values is %d\n", x);
    
    return 0;
}
