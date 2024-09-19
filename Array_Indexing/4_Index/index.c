#include <stdio.h>

int MyIndex(int *arr, int size, int targetVal) {
    for (int n = 0; n < size; n++) {
        // Attempt to find a value using a linear search
        if (arr[n] == targetVal) {
            return n;
        }
    }
    // As all elements have been checked, the element has not been found
    // So return the appropriate value
    return -1;
}

int main() {
    // Test Cases

    // First Test
    int one[5] = {10, 20, 30, 40, 50};
    if (MyIndex(one, 5, 40) == 3) {
        printf("Passed Test!\n\tExpected: 3\n\tReturned: %d\n", MyIndex(one, 5, 40));
    }
    else {
        printf("Failed Test!\n\tExpected: 3\n\tReturned: %d\n", MyIndex(one, 5, 40));
    }

    // Value not Found Test
    if (MyIndex(one, 5, 0) == -1) {
        printf("Passed Test!\n\tExpected: -1\n\tReturned: %d\n", MyIndex(one, 5, 0));
    }
    else {
        printf("Failed Test!\n\tExpected: -1\n\tReturned: %d\n", MyIndex(one, 5, 0));
    }

    // Non Ordered Values
    int two[7] = {50, 22, 100, 4, 1, 3, 0};
        if (MyIndex(two, 7, 0) == 6) {
        printf("Passed Test!\n\tExpected: 6\n\tReturned: %d\n", MyIndex(two, 7, 0));
    }
    else {
        printf("Failed Test!\n\tExpected: 6\n\tReturned: %d\n", MyIndex(two, 7, 0));
    }

    return 0;
}