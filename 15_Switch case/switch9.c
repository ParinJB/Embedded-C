// 11) example of nested switch statement
#include <stdio.h>

int main() {
    int firstOption = 2;
    
    switch(firstOption) {
        case 1:
            printf("Category 1 selected\n");

            switch(firstOption) {
                case 1:
                    printf("Option 1 selected under Category 1\n");
                    break;
                case 2:
                    printf("Option 2 selected under Category 1\n");
                    break;
                default:
                    printf("Invalid option under Category 1\n");
            }
            break;

        case 2:
            printf("Category 2 selected\n");

            // Inner switch to choose the option under category 2
            switch(firstOption) {
                case 1:
                    printf("Option 1 selected under Category 2\n");
                    break;
                case 2:
                    printf("Option 2 selected under Category 2\n");
                    break;
                default:
                    printf("Invalid option under Category 2\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}