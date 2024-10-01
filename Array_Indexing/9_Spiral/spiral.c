#include <stdio.h>

void Spiral(int *element, int height, int width) {
    
    int leftP = 0;
    int rightP = width;
    int topP = 0;
    int bottomP = height;

    int x = 0;
    int y = 0;

    while (leftP < rightP && topP < bottomP) {
        // Top Row
        for (int i = leftP; i < rightP; i++) {
            printf("%d ", *element);
            element++;
        }
        topP++;
        element += width - 1;

        // Right Column
        for (int i = topP; i < bottomP; i++) {
            printf("%d ", *element);
            element += width;
        }
        rightP--;
        element -= width + 1;

        if (!(leftP < rightP && topP < bottomP)) {
            break;
        }

        // Bottom Row
        for (int i = rightP; i > leftP; i--) {
            printf("%d ", *element);
            element--;
        }
        bottomP--;
        element -= width - 1;

        // Left Column
        for (int i = bottomP; i > topP; i--) {
            printf("%d ", *element);
            element -= width;
        }
        leftP++;
        element += width + 1;
    }
    printf("\n");
}


int main() {

    // Test 1
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Expected:\n1 2 3 6 9 8 7 4 5\nActual:\n");
    Spiral(&array1[0][0], 3, 3);

    // Test 2
    int array2[2][1] = {{4}, {5}};
    printf("Expected:\n4 5\nActual:\n");
    Spiral(&array2[0][0], 2, 1);

    // Test 3
    int array3[6][6] = {{0, 1, 2, 3, 4, 5}, {6, 7, 8, 9, 10, 11}, {12, 13, 14, 15, 16, 17}, {18, 19, 20, 21, 22, 23}, {24, 25, 26, 27, 28, 29}, {30, 31, 32, 33, 34, 35}};
    printf("Expected:\n0 1 2 3 4 5 11 17 23 29 35 34 33 32 31 30 24 18 12 6 7 8 9 10 16 22 28 27 26 25 19 13 14 15 21 20\nActual:\n");
    Spiral(&array3[0][0], 6, 6);
    
}