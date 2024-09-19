#include <stdio.h>
#include <stdlib.h>

void PrintArray(int *array, int size) {
    for (int n = 0; n < size; n++) {
        printf("%d ", array[n]);
    }
    printf("\n");
}

int main() {
    // Test Cases

    // First Test
    int one[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int currentSize = sizeof(one) / sizeof(int);
    printf("Expected: 1 2 3 4 5 6 7 8 9 10\n");
    PrintArray(one, currentSize);

    // Different Number of Elements
    int two[5] = {10, 25, 50, 100, 250};
    currentSize = sizeof(two) / sizeof(int);
    printf("\nExpected: 10 25 50 100 250\n");
    PrintArray(two, currentSize);

    // Only one Element
    int three[1] = {0};
    currentSize = sizeof(three) / sizeof(int);
    printf("\nExpected: 0\n");
    PrintArray(three, currentSize);

    return 0;
}