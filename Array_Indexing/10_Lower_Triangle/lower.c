#include <stdio.h>

/**
 * @brief Prints the lower triangle of a given square matrix
 * 
 * @param element The first element of the array
 * @param height Number of rows of the array
 * @param width Number of columns of the array
 */
void lowerTriangle(int *element, int height, int width) {
    if (height != width) {
        printf("Error: Matrix is not square");
    }
    else {
        for (int n = 0; n < height; n++) {
            for (int i = 0; i <= n; i++) {
                printf("%d ", *element);
                element++;
            }
            element += width - (n + 1);
        }
    }
    printf("\n");
}

int main() {
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Expected:\n1 4 5 7 8 9\nActual:\n");
    lowerTriangle(&array1[0][0], 3, 3);

    int array2[2][1] = {{1}, {2}};
    printf("\nExpected:\nError: Matrix is not square\nActual:\n");
    lowerTriangle(&array2[0][0], 2, 1);

    int array3[5][5] = {{0, 1, 2, 3, 4}, {5, 6, 7, 8, 9}, {10, 11, 12, 13, 14}, {15, 16, 17, 18, 19}, {20, 21, 22, 23, 24}};
    printf("\nExpected:\n0 5 6 10 11 12 15 16 17 18 20 21 22 23 24\nActual:\n");
    lowerTriangle(&array3[0][0], 5, 5);

    return 0;
}