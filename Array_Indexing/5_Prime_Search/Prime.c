#include <stdio.h>

/**
 * @brief Test whether a numver is prime, or not
 * 
 * @param testNumber The number to be tested if it is prime
 * @return int If it is Prime, Returns 1, Otherwise 0
 */
int IsPrime(int testNumber) {
    // 1 is not Prime
    if (testNumber == 1) {
        return 0;
    }
    // Checking for any even numbers that aren't 2
    if (testNumber % 2 == 0 && testNumber != 2) {
        return 0;
    }

    // Checking for any other factors
    // Only checking up to the square root of number to prevent wasted iterations.
    for (int n = 3; n * n <= testNumber; n += 2) {
        if (testNumber % n == 0) {
            return 0;
        }
    }
    // No factors have been found
    // Return 1 (True)
    return 1;
    }


/**
 * @brief Returns the first prime in an array
 * 
 * @param arr Pointer to the first element in the array
 * @param elements Number of elements in the array
 * @return int The First Prime Number in the Array
 * Returns -1 if no prime is found
 */
int FirstPrime(int *arr, int elements) {
    for (int n = 0; n < elements; n++) {
        if (IsPrime(arr[n]) == 1) {
            return arr[n];
        }
    }
    printf("\nError: No Prime Found!\n");
    return -1;
}

int main() {
    // Test Cases
    // Prime Numbers for Test Cases found on Wikipedia

    // First Test
    int one[5] = {10, 3455, 3317, 1, 2};
    if (FirstPrime(one, 5) == 2) {
        printf("Passed Test!\n\tExpected: 2\n\tReturned: %d\n", FirstPrime(one, 5));
    }
    else {
        printf("Failed Test!\n\tExpected: 2\n\tReturned: %d\n", FirstPrime(one, 5));
    }

    // Second Test, Multiple Primes
    int two[7] = {1, 9, 3557, 2, 3, 5, 7};
    if (FirstPrime(two, 7) == 3557) {
        printf("Passed Test!\n\tExpected: 3557\n\tReturned: %d\n", FirstPrime(two, 7));
    }
    else {
        printf("Failed Test!\n\tExpected: 3557\n\tReturned: %d\n", FirstPrime(two, 7));
    }

    // No Primes
    int three[5] = {4, 6, 9, 25, 27};
    if (FirstPrime(three, 3) == -1) {
        printf("Passed Test!\n\tExpected: -1\n\tReturned: %d\n", FirstPrime(three, 5));
    }
    else {
        printf("Failed Test!\n\tExpected: -1\n\tReturned: %d\n", FirstPrime(three, 5));
    }


    return 0;
}