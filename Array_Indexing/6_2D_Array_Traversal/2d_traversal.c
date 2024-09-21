#include <stdio.h>

/**
 * @brief Prints a 2D Array, row by row
 * 
 * @param firstElement The Address of the First Element in the Array
 * @param height Number of Rows in the Array
 * @param width Number of Columns in the Array
 */
void Read2DArray(int *firstElement, int height, int width) {
    for (int m = 0; m < height; m++) {
        for (int n = 0; n < width; n++) {
            printf("%d ", *firstElement);
            // If statement stops the pointer going outside the array.
            if (m != height - 1 || n != width - 1) {
                firstElement++;
            }
        }
        printf("\n");
    }
}

int main() {
    int array1[2][3] = {{0, 1, 2}, {3, 4, 5}};

    int numRows = sizeof(array1) / sizeof(array1[0]);
    int numElem = sizeof(array1) / sizeof(int);
    int numCols = numElem / numRows;

    printf("Elements: %d, Rows: %d, Columns: %d\n", numElem, numRows, numCols);
    printf("Expected:\n0 1 2\n3 4 5\n\n");
    Read2DArray(&array1[0][0], numRows, numCols);

    int array2[5][4] = {{0, 0, 0, 0}, {6, 5, 79, 3}, {1, 2, 1, 0}, {10, 100, 23, 24}};
    printf("\nExpected:\n0 0 0 0\n6 5 79 3\n1 2 1 0\n10 100 23 24\n0 0 0 0\n\n");
    Read2DArray(&array2[0][0], 5, 4);
}