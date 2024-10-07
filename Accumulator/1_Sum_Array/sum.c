#include <stdio.h>

/**
 * @brief Sum the Elements of an Array
 * 
 * @param element Address of the first element in the array
 * @param size Number of elements in the array
 * @return int The total of all Elements in the Array
 */
int sum_array(int *element, int size) {
    int total = 0;
    for (int n = 0; n < size; n++) {
        total += *element;
        element++;
    }
    return total;
}

// Same as sum_array(), using index instead of pointers
int sum_array_index(int *element, int size) {
    int total = 0;
    for (int n = 0; n < size; n++) {
        total += element[n];
    
    }
    return total;
}


int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    printf("Expected:\n15\nActual:\n");
    printf("%d\n", sum_array(&array1[0], sizeof(array1) / sizeof(int)));
    printf("Actual (Index Version):\n");
    printf("%d\n\n", sum_array_index(&array1[0], sizeof(array1) / sizeof(int)));


    int array2[3] = {0, 0, 0};
    printf("Expected:\n0\nActual:\n");
    printf("%d\n", sum_array(&array2[0], sizeof(array2) / sizeof(int))); 
    printf("Actual (Index Version):\n");
    printf("%d\n\n", sum_array_index(&array2[0], sizeof(array2) / sizeof(int)));

    int array3[10] = {20, 25, 5, 50, 0};
    printf("Expected:\n100\nActual:\n");
    printf("%d\n", sum_array(&array3[0], sizeof(array3) / sizeof(int)));
    printf("Actual (Index Version):\n");
    printf("%d\n\n", sum_array_index(&array3[0], sizeof(array3) / sizeof(int)));

    int array4[2] = {-6, 6};
    printf("Expected:\n0\nActual:\n");
    printf("%d\n", sum_array(&array4[0], sizeof(array1) / sizeof(int)));
    printf("Actual (Index Version):\n");
    printf("%d\n\n", sum_array_index(&array4[0], sizeof(array4) / sizeof(int)));

    int array5[7] = {1, -5, 7, 2, -10, 12, -11};
    printf("Expected:\n-4\nActual:\n");
    printf("%d\n", sum_array(&array5[0], sizeof(array5) / sizeof(int)));
    printf("Actual (Index Version):\n");
    printf("%d\n", sum_array_index(&array5[0], sizeof(array5) / sizeof(int)));

    return 0;
}