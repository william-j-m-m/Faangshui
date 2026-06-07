#include <stdio.h>

void printReversed(int *arr, int size) {
    for (int n = size - 1; n >= 0; n--) {
        printf("%d\n", arr[n]);
    }
}

int main() {
    int first_arr[] = {1, 2, 3, 4, 5};
    int len_one = sizeof(first_arr) / sizeof(first_arr[0]);

    printReversed(first_arr, len_one);

    printf("\n");
    int second_arr[] = {3};
    int len_two = sizeof(second_arr) / sizeof(second_arr[0]);
    printReversed(second_arr, len_two);

    return 0;
}