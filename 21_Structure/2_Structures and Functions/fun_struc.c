// 1) example
#include<stdio.h>

struct book
{
    char name[100];
    int price;
};

void print_info(struct book b){
    printf("Name  : %s\n", b.name);
    printf("Price : %d\n", b.price);
}
int main(){
    struct book b = {"To Good To Be True", 1000};
    print_info(b);
    return 0;
}

