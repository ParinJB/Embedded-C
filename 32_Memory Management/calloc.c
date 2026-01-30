//calloc() allocates memory and initializes it to zero
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name;

    name = (char *)calloc(strlen("it's me!!") + 1, sizeof(char));

    if (name == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
        return 1;
    }

    strcpy(name, "it's me!!");
    printf("Name = %s\n", name);

    free(name);  // always free allocated memory
    return 0;
}
