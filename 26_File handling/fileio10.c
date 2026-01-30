#include<stdio.h>

struct employee
{
    char *name;
    int age;
    int exp;
};

int main(){
    FILE *ptr;
    struct employee ep[] = {{"abc", 21, 1}, {"xyz", 25, 3}, {"pqr", 30, 5}};

    ptr = fopen("detail.txt", "w"); //creating file in write mode
    for (int i = 0; i < 3; i++)
    {
        fprintf(ptr, "employee name : %s\n          age : %d\n   experience : %d\n", ep[i].name, ep[i].age, ep[i].exp);
    }
    fclose(ptr); // close the file
    return 0;
}