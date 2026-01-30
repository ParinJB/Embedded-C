#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *f = fopen("file.txt", "r");

  if (f == NULL) {
    perror("Could not open file.txt");
    exit(EXIT_FAILURE); // More readable than exit(1)
  }

  fclose(f);
  return EXIT_SUCCESS;
}