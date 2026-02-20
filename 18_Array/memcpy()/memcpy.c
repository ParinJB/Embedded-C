//The memcpy() function is used to copy a block of memory from one location to another
//copies memory in a byte-by-byte format
//syntax of memcpy() -- memcpy(*to, *from, numBytes);

#include<stdio.h>
#include<string.h>

int main(){
    int a = 9, b = 78;

    printf("Values of a = %d and b = %d before using memcpy\n", a, b);

    memcpy(&a, &b, sizeof(int)); //copy the value of b into a using memcpy()
    
    printf("Values of a = %d and b = %d after using memcpy\n", a, b);
    return 0;
}