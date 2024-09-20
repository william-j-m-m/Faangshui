#include <stdio.h>

int main() {
    int array1[2][3] = {{0, 1, 2}, {3, 4, 5}};

    int numRows = sizeof(array1) / sizeof(array1[0]);
    int numElem = sizeof(array1) / sizeof(int);
    int numCols = numElem / numRows;

    printf("Elements: %d, Rows: %d, Columns: %d\n", numElem, numRows, numCols);
}