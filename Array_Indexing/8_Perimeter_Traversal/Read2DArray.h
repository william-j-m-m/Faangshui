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
