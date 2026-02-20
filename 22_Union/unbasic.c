#include<stdio.h>
#include<string.h>

// Define a union with 
// different data types
union Student {
    
    char name[100];
    int r_no;
    int age;
};

int main() {
    
    // Declare a union variable
    union Student data;

   // Use strcpy to assign the string to the name field
    strcpy(data.name, "abcd");
    printf("Name    : %s\n", data.name);  // Print name

    data.r_no = 9;   // Assign and print the roll number
    printf("Roll no : %d\n", data.r_no);
    
    data.age = 20;
    printf("Age     : %d\n", data.age);

    return 0;
}