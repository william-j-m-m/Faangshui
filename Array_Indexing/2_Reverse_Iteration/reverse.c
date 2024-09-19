#include <stdio.h>
#include <stdlib.h>

// Very similar to the previous challenge.
// Changing the loop to start at the max value of n, and reduce down to 0.

void PrintArray(int *array, int size) {
    for (int n = size - 1; n >= 0; n--) {
        printf("%d ", array[n]);
    }
    printf("\n");
}

int main() {
    // Test Cases

    // First Test
    int one[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int currentSize = sizeof(one) / sizeof(int);
    printf("Expected: 10 9 8 7 6 5 4 3 2 1\n");
    PrintArray(one, currentSize);

    // Different Number of Elements
    int two[5] = {10, 25, 50, 100, 250};
    currentSize = sizeof(two) / sizeof(int);
    printf("\nExpected: 250 100 50 25 10\n");
    PrintArray(two, currentSize);

    // Only one Element
    int three[1] = {0};
    currentSize = sizeof(three) / sizeof(int);
    printf("\nExpected: 0\n");
    PrintArray(three, currentSize);

    return 0;
}