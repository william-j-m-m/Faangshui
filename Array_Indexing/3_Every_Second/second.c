#include <stdio.h>
#include <stdlib.h>

// Modifying this challenge slightly to allow more than just every second element

void PrintEveryX(int *array, int size, int jump) {
    for (int n = 0; n < size; n += jump) {
        printf("%d ", array[n]);
    }
    printf("\n");
}

int main() {
    // Test Cases

    // First Test
    int one[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int currentSize = sizeof(one) / sizeof(int);
    printf("Expected: 1 3 5 7 9\n");
    PrintEveryX(one, currentSize, 2);

    // Every third element
    printf("\nExpected: 1 4 7 10\n");
    PrintEveryX(one, currentSize, 3);

    // Different Number of Elements
    int two[5] = {10, 25, 50, 100, 250};
    currentSize = sizeof(two) / sizeof(int);
    printf("\nExpected: 10 50 250\n");
    PrintEveryX(two, currentSize, 2);

    // Only one Element
    int three[1] = {0};
    currentSize = sizeof(three) / sizeof(int);
    printf("\nExpected: 0\n");
    PrintEveryX(three, currentSize, 2);

    return 0;
}