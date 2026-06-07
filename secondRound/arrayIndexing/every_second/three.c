#include <stdio.h>

void every_n_elements(int *arr, int size, int step) {
    if (step <= 0) {
        printf("Error: enter a step value greater than 1\n");
    } else {
        for (int n = 0; n < size; n+= step) {
            printf("%d ", arr[n]);
        }
        printf("\n");
    }
}

int main() {
    int odd_arr[] = {1, 2, 3, 4, 5};
    int even_arr[] = {10, 20, 30, 40, 50, 60};
    int short_arr[] = {1};
  
    every_n_elements(odd_arr, 5, 2);
    every_n_elements(odd_arr, 5, 3);

    every_n_elements(even_arr, 6, 2);
    every_n_elements(even_arr, 6, 3);

    every_n_elements(short_arr, 1, 2);
    every_n_elements(short_arr, 1, 3);


    return 0;
}