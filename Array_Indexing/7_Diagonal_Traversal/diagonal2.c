#include <stdio.h>

/**
 * @brief A Function to read the leading diagonal of a Square Matrix (Array)
 * 
 * @param element Address of the first element in the array
 * @param height Number of Rows (must be equal to the number of columns, otherwise will print an error log)
 * @param width  Number of Columns (must be equal to the number of rows, otherwise will print an error log)
 */
void ReadDiagonal(int *element, int height, int width) {
    if (height == width) {
        for (int n = 1; n <= height; n++) {
            printf("%d ", *element);
            element += width + 1;
        }
        printf("\n");
    }
    else {
        printf("ERROR: Square Matrices Only\n");
    }
}

int main() {
    int array1[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

    int numRows = sizeof(array1) / sizeof(array1[0]);
    int numElem = sizeof(array1) / sizeof(int);
    int numCols = numElem / numRows;

    printf("Elements: %d, Rows: %d, Columns: %d\n", numElem, numRows, numCols);
    printf("Expected:\n0 4 8\nActual:\n");
    ReadDiagonal(&array1[0][0], numRows, numCols);

    printf("\nElements: %d, Rows: %d, Columns: %d", 25, 5, 5);
    int array2[5][5] = {{0, 0, 0, 0, 0}, {6, 5, 79, 3, 5}, {1, 2, 1, 0, 10}, {10, 100, 23, 24, 15}};
    printf("\nExpected:\n0 5 1 24 0\nActual:\n");
    ReadDiagonal(&array2[0][0], 5, 5);

    // Non Square Array
    printf("\nElements: %d, Rows: %d, Columns: %d", 6, 2, 3);
    int array3[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("\nExpected:\nERROR: Square Matrices Only\nActual:\n");
    ReadDiagonal(&array3[0][0], 2, 3);

    int array4[5][5] = {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}, {15, 16, 17, 18, 19}, {20, 21, 22, 23, 24}};
    printf("\nExpected:\n0 6 12 18 24\nActual:\n");
    ReadDiagonal(&array4[0][0], 5, 5);
}