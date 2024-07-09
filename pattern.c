#include <stdio.h>

// Function to calculate the number of digits in an integer
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to print the pattern
void printPattern(int n) {
    int value = 1;
    int arr[n][n];

    // Initialize the array with 0s
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    // Fill the array as per the given pattern
    for (int i = 0; i < n; i++) {
        int x = i, y = 0;
        while (x >= 0) {
            arr[x--][y++] = value++;
        }
    }
    for (int j = 1; j < n; j++) {
        int x = n - 1, y = j;
        while (y < n) {
            arr[x--][y++] = value++;
        }
    }

    // Calculate the maximum number of digits in the array
    int maxDigits = countDigits(n * (n + 1) / 2);

    // Print the array in a right-aligned format
    for (int i = 0; i < n; i++) {
        // Print leading spaces for alignment
        for (int j = 0; j < n - i - 1; j++) {
            for (int k = 0; k < maxDigits + 1; k++) {
                printf(" ");
            }
        }
        for (int j = 0; j <= i; j++) {
            printf("%*d ", maxDigits, arr[i - j][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}
