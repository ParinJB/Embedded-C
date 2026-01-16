#include <stdio.h>

int main() {
    
    // Loop to print numbers from 1 to 5
    for (int i = 0; i < 5; i++) {
        printf( "%d\n", i + 1); // this iteration will add 1 in i's last value, so the for loop ends at 4 but this will add 1 so it becomes 5
    }
    
    return 0;
}

//this example shows the difference of using i+1 and only i

#include <stdio.h>

int main() {
    
    // Loop to print numbers from 0 to 4
    for (int i = 0; i < 5; i++) {
        printf( "%d\n", i);
    }
    
    return 0;
}