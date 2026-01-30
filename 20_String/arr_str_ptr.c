#include<stdio.h>
#include<string.h>

int main(){
    char *sub[10] = {"maths", "physics", "chemistry", "biology"};

    for(int i = 0; i < 4; i++){
        printf("%s\n", sub[i]);
    }
    printf("\n");
    return 0;
}