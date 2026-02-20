#include<stdio.h>

enum level { 
    LOW, MEDIUM, HIGH 
};

int main() {
  // Create an enum variable and assign a value to it
  enum level v = MEDIUM;

  // Print the enum variable
  printf("%d\n", v);

  return 0;
}