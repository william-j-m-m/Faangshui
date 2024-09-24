#include <stdio.h>
#include "Read2DArray.h"

// This program has two different ways of solving the problem, making the 

/**
 * @brief Print the perimeter values in a clockwise order, starting from the first element
 * 
 * @param firstElement Address of the first element in the array
 * @param height Number of Rows in the Array
 * @param width Number of Columns in the Array
 */
void ReadPerimeterClockwise(int *firstElement, int height, int width) {
    // Print the top row
    for (int n = 0; n < width; n++) {
        printf("%d ", *firstElement);
        firstElement++;
    }
    firstElement--;
    // Print the right column
    for (int n = 0; n < height - 1; n++) {
        firstElement += width;
        printf("%d ", *firstElement);
    }
    // Print the bottom row
    for (int n = 0; n < width - 1; n++) {
        firstElement--;
        printf("%d ", *firstElement);
    }
    // Print the left column
    for (int n = 0; n < height - 2; n++) {
        firstElement -= width;
        printf("%d ", *firstElement);
    }
    printf("\n");
}

/**
 * @brief Print the perimeter values, outputted like a matrix with the central values missing
 * 
 * @param firstElement Address of the first element in the array
 * @param height Number of rows in the array
 * @param width Number of columns in the array
 */
void ReadPerimeterSquare(int *firstElement, int height, int width) {
    // Print the top row of the array
    for (int n = 0; n < width; n++) {
        printf("%d\t", *firstElement);
        firstElement++;
    }
    firstElement--;
    printf("\n");

    // Print the two outer elements in the non-edge rows
    for (int n = 0; n < height - 2; n++) {
        firstElement++;
        printf("%d\t", *firstElement);
        // Add a tab character whether there would be an element (for formatting)
        for (int i = 0; i < width - 2; i++) {
            printf("\t");
        }
        firstElement += width - 1;
        printf("%d\t", *firstElement);
        printf("\n");
    }
    
    if (height != 1) {
        // Print the bottom row of the array
        for (int n = 0; n < width; n++) {
            firstElement++;
            printf("%d\t", *firstElement);
        }
        printf("\n");
    }
}

int main() {

    // Test One
    int array1[4][4] = {{0, 11, 2, 3}, {9, 0, 0, 4}, {10, 20, 30, 10}, {8, 7, 6, 5}};
    printf("The Array:\n");
    Read2DArray(&array1[0][0], 4, 4);
    printf("\n");
    
    ReadPerimeterSquare(&array1[0][0], 4, 4);
    printf("\n\n");
    printf("Expected: 0 1 2 3 4 5 6 7 8 9\n");
    ReadPerimeterClockwise(&array1[0][0], 4, 4);

    // Test Two
    int array2[1][1] = {8};
    printf("\n----------\n\nThe Array:\n");
    Read2DArray(&array2[0][0], 1, 1);
    printf("\n");
    
    ReadPerimeterSquare(&array2[0][0], 1, 1);
    printf("\n\n");
    printf("Expected: 8\n");
    ReadPerimeterClockwise(&array2[0][0], 1, 1);   

    // Test 3
    int array3[2][3] = {{12, 15, 18}, {120, 1500, 18000}};
    printf("\n----------\n\nThe Array:\n");
    Read2DArray(&array3[0][0], 2, 3);
    printf("\n");
    
    ReadPerimeterSquare(&array3[0][0], 2, 3);
    printf("\n\n");
    printf("Expected: 12 15 18 18000 1500 120\n");
    ReadPerimeterClockwise(&array3[0][0], 2, 3);   

    return 0;
}