// 1) example
// example of without using static keyword
#include<stdio.h>
#include<stdlib.h>

int increment(){
    
    int count = 0; // initialize the count to 0
    count = count + 1; // adding the one into the count
    return count;
} 

int main(){
    
    int v1, v2, v3, v4;

    v1 = increment();  //function call
    v2 = increment();
    v3 = increment();
    v4 = increment();
    
    printf("%d\n%d\n%d\n%d\n", v1, v2, v3, v4); // it will gives one(1) for four time always, because we have not used the static keyword

    return 0;
}

// 2) example of using static keyword
#include<stdio.h>
#include<stdlib.h>

int increment(){
    
    static int count = 0; // initialize the count to 0
    count = count + 1; // adding the one into the count
    return count;
} 

int main(){
    
    int v1, v2, v3, v4;

    v1 = increment(); //function call
    v2 = increment();
    v3 = increment();
    v4 = increment();
    
    printf("%d\n%d\n%d\n%d\n", v1, v2, v3, v4); //it gives 1, 2, 3, 4 reason we have used the static keyword so it will remember the value between the function calls

    return 0;
}

// 3) example of declaring global variable
#include<stdio.h>
#include<stdlib.h>

int count; // this is global declaration means we can use this throughout the program

int increment(){
    
    count = count + 1;
    return count;
} 

int main(){
    
    int v1, v2, v3, v4;

    v1 = increment();
    v2 = increment();
    v3 = increment();
    v4 = increment();
    
    printf("%d\n%d\n%d\n%d\n", v1, v2, v3, v4);

    return 0;
}
