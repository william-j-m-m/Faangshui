#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    int length_arr = sizeof(arr) / sizeof(int);

    for (int n = 0; n < length_arr; n++) {
        printf("%d\n", arr[n]);
    }

    return 0;
}