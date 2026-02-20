#include<stdio.h>
#include<string.h>

int main(){
    char k[50] = "This is ";
    char p[] = "new string!";
    int i = 0, j = 0;

    while (k[i] != '\0')
    {
        i++;
    }
    while (p[j] != '\0')
    {
        k[i] = p[j];
        i++;
        j++;
    }
    k[i] = '\0';
    printf("Concatenated String: %s\n", k);

    return 0;

}