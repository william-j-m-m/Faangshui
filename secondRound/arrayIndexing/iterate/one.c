#include <stdio.h>

void print_array(int *arr, int len) {
    for (int n = 0; n < len; n++) {
        printf("%d\n", arr[n]);
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int length_arr = sizeof(arr) / sizeof(int);

    print_array(arr, length_arr);

    return 0;
}