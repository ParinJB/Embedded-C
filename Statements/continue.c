// 1) example of continue statement
#include<stdio.h>

int main(){

 int i, n = 2;

 for(i = 0; i <= 20; i++){
    if(i == n) // condition will check when i = 2
    {
        n = n + 2; // becomes n = 2+2 = 4 so after 1st condition n becomes 4, and then again loop checks
        continue;  // this statement will break/skip that condition 
    }
    printf("%d\n",i);
 }   
return 0;
}


// 2) example
#include<stdio.h>

int main(){
    for(int i = 0; i <= 5; i++){
        if(i == 3){
            continue; //it will skip the iteration when i = 3
        }
        printf("%d ", i);
    }
    return 0;
}


// 3) example
#include<stdio.h>

int main()
{
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) // print the even values
            continue;
        printf("%d ", i);
    }
    return 0;
}

