#include<stdio.h>

typedef struct size_structure {
  char a; // 1 byte
  int b;  // 4 bytes
  char c; // 1 byte
}Size_t;

int main() {
  printf("Size of struct: %zu bytes\n", sizeof(struct size_structure));
  return 0;
}