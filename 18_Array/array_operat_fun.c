#include <stdio.h>

/* Function declarations */
void inputArray(int a[], int size);
void displayArray(int a[], int size);
int findMax(int a[], int size);
int findMin(int a[], int size);
int arraySum(int a[], int size);
int arrayAverage(int a[], int size);
void reverseArray(int a[], int size);
int searchElement(int a[], int size, int key);

int main() {
    int a[100], size, key;

    printf("Enter size of array: ");
    scanf("%d", &size);

    inputArray(a, size);

    printf("Array elements: ");
    displayArray(a, size);
    printf("\n");

    printf("Maximum element: %d\n", findMax(a, size));
    printf("Minimum element: %d\n", findMin(a, size));
    printf("Sum of elements: %d\n", arraySum(a, size));
    printf("Average of elements: %d\n", arrayAverage(a, size));

    reverseArray(a, size);
    printf("Reversed array: ");
    displayArray(a, size);

    printf("\n");
    printf("Enter element to search: ");
    scanf("%d", &key);

    int pos = searchElement(a, size, key);
    if (pos != -1)
        printf("Element found at position: %d\n", pos + 1);
    else
        printf("Element not found\n");

    return 0;
}

/* Function definitions */

void inputArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

void displayArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}

int findMax(int a[], int size) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int findMin(int a[], int size) {
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int arraySum(int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

int arrayAverage(int a[], int size) {
    return (float)arraySum(a, size) / size;
}

void reverseArray(int a[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

int searchElement(int a[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (a[i] == key)
            return i;
    }
    return -1;
}

