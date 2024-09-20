#include <stdio.h>

// Assuming there is always a prime number in the array

/**
 * @brief 
 * 
 * @param testNumber 
 * @return int 
 */
int IsPrime(int testNumber) {
    // 1 is not Prime
    if (testNumber == 1) {
        return 0;
    }
    // Checking for any even numbers that aren't 2
    if (int testNumber % 2 == 0 && testNumber != 2) {
        return 0;
    }

    // Checking for any other factors
    // Only checking up to the square root of number to prevent wasted iterations.
    for (int n = 3; n * n < testNumber; n += 2) {
        if (testNumber % n == 0) {
            return 0;
        }
    }
    // No factors have been found
    // Return 1 (True)
    return 1;
    }
    
}

/**
 * @brief Returns the first prime in an array
 * 
 * @param arr Pointer to the first element in the array
 * @param elements Number of elements in the array
 * @return int The First Prime Number in the Array
 */
int FirstPrime(int *arr, int elements) {

}

int main() {

}