#include <stdio.h>

/**
 * @brief Return the Minimum and Maximum Values in the Array
 * 
 * @param array The array you want to test
 * @param size The number of elements in the array
 * @param min Address of Variable to hold the minimum value
 * @param max Address of Variable to hold the maximum value
 */
void minMax(int *array, int size, int *min, int *max) {
    // Set Starting Values
    *min = array[0];
    *max = array[0];

    for (int n = 1; n < size; n++) {
        if (array[n] < *min) {
            *min = array[n];
        }
        else if (array[n] > *max) {
            *max = array[n];
        }
    }
}

int main() {
    int min, max;

    int array0[5] = {10, 12, 1, 15, 6};
    minMax(array0, 5, &min, &max);
    printf("Expected:\nMin: 1 Max: 15\nActual:\n");
    printf("Min: %d Max: %d\n", min, max);

    int array1[10] = {-2, 4, 10, 3, 17, 17, 6, 1, 9, 11};
    minMax(array1, 10, &min, &max);
    printf("\nExpected:\nMin: -2 Max: 17\nActual:\n");
    printf("Min: %d Max: %d\n", min, max);

    int array2[1] = {0};
    minMax(array2, 1, &min, &max);
    printf("\nExpected:\nMin: 0 Max: 0\nActual:\n");
    printf("Min: %d Max: %d\n", min, max);

    return 0;
}