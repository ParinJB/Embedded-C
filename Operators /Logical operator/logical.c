//for &&(AND) - all conditions must have true or non zero only then output will become true(1)
//for ||(OR) - if one condition will true then output will become true(1)
//for !(NOT) - it is the compliment so when it is 0 output is 1 and when it is 1 output is 0


// 1) example when both a and b are non zero
#include <stdio.h>

int main() {
    int a = 25, b = 5;

    printf("a && b : %d\n", a && b); // output is 1(true) because a and b are non zero values 
    printf("a || b : %d\n", a || b); // same 
    printf("!a: %d\n", !a); // output is 0(false) because a is non zero means 1 and !a is compliment so that it's 0

    return 0;
}


// 2) example when one of a or b is zero
#include <stdio.h>

int main() {
    int a = 0, b = 5;

    printf("a && b : %d\n", a && b); // output is 0(false) because a is zero and b is non zero value 
    printf("a || b : %d\n", a || b); // output is 1(true) because when one of them is true(1) then op automatically becomes true(1) 
    printf("!a: %d\n", !a); // output is 1(true) because a is zero and !a is compliment so that it's 1

    return 0;
}


// concept of short circuit in logical operators
// 3) example
#include <stdio.h>

int main() {
    int a = 8, b = 7;
    int p;

    p = (a<b) && (b++);  //when first condition becomes false(0) then next condition will not implement
    printf("%d\n", p);  //output is 0
    printf("%d\n", b);  //still 7 because b++ is not implemented
    return 0;
}


// 4) this example shows when first condition becomes true then and then only second condition will implemented
// this example uses &&(AND) logical operator
#include <stdio.h>

int main() {
    int a = 8, b = 7;
    int p;

    p = (a>b) && (b++); //when first condition becomes true(1) then next condition will implement
    printf("%d\n", p); //output is 1
    printf("%d\n", b); //now 8 because b++ is implemented
    return 0;
}


// 5) this example shows that when first condition becomes false then only second condition will implemented 
// this example uses ||(OR) logical operator
#include <stdio.h>

int main() {
    int a = 8, b = 7;
    int p;

    p = (a<b) || (b++);  //when first condition becomes false(0) then next condition will implement
    printf("%d\n", p);  //output is 1
    printf("%d\n", b);  //now 8 because b++ is implemented
    return 0;
}

// 6) here the difference when first condition becomes true or false
//now this example shows if first condition becomes true then next condition will not implemented
// this example uses ||(OR) logical operator
#include <stdio.h>

int main() {
    int a = 8, b = 7;
    int p;

    p = (a>b) || (b++); //when first condition becomes true(1) then next condition will not implement
    printf("%d\n", p); //output is 1
    printf("%d\n", b); //still 7 because b++ is not implemented
    return 0;
}

