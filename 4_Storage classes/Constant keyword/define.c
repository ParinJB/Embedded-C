// 1) example of #define in constant keyword
#include<stdio.h>
#define PI 3.14159  // syntax is, #define name value, now preprocessor will replace name with value

int main(){
   
    printf("%.5f\n", PI);  // here we get the value of this name PI

    return 0;
}


// 2) example
#include<stdio.h>
#define value 789  // syntax is #define name value, now preprocessor will replace name with value

int main(){
   
    printf("value = %d\n", value);  // "value" will not replace by the number

    return 0;
}


// 3) example shows that we can use function also with this define type
#include<stdio.h>
#define add(x, y) x+y  // function is used 

int main(){
   
    printf("addition of two no: %d\n", add(7,8));  // here we get the addition of numbers

    return 0;
}


// 4) example shows that we can use multiple lines by using  "\"
#include<stdio.h>
#define greater(x,y) if(x > y)\
    printf("%d is greater than %d\n", x, y);\
else\
    printf("%d is lesser than %d\n", x, y);    

int main(){
   
    greater(7,9);

    return 0;
}


// 5) example of expansion then evaluation
#include<stdio.h>
#define add(x, y) x+y  // function is used 

int main(){
   
    printf("result of expression a * b + c is: %d\n", 5 * add(7, 8));  // first it will multiply 5*7 then addition with 8
    return 0;
}


// 6) example of predefined macros
#include<stdio.h>

int main(){
   
    printf("Date : %s\n", __DATE__);  
    printf("Date : %s\n", __TIME__); 
    return 0;
}