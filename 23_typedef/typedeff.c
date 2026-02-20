#include<stdio.h>

typedef struct car_info
{
    char name[100];
    int year;
}car_t;

int main(){
    car_t c1 = {"BMW", 1999};
    car_t c2 = {"AUDI", 1969};

    printf("Car name: %s\tCar year: %d\n", c1.name, c1.year);
    printf("Car name: %s\tCar year: %d\n", c2.name, c2.year);
    return 0;
}