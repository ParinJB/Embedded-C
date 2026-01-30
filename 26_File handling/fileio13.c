#include<stdio.h>

int main(){
    char oldname[] = "sum.txt";
    char newname[] = "addition.txt";

    if (rename(oldname, newname) == 0) //rename() will rename the old file name with new name
    {
        printf("file rename successfully from %s to %s\n", oldname, newname);
    }else{
        printf("error in renaming file!\n");
    }
    return 0;
}