#include <stdio.h>

// Function to print Fibonacci series up to n
void fibonacciSeries(int n) {
    int a = 0, b = 1;
    
    // If n is greater than 0, print the first Fibonacci number (0)
    if (n >= 1) {
        printf("%d ", a);
    }
    
    // If n is greater than 1, print the second Fibonacci number (1)
    if (n >= 2) {
        printf("%d ", b);
    }

    // Generate and print the rest of the Fibonacci series up to n
    while (b <= n) {
        int next = a + b;
        if (next > n) {
            break; // Stop if the next Fibonacci number exceeds n
        }
        printf("%d ", next);
        a = b;
        b = next;
    }

    printf("\n");
}
