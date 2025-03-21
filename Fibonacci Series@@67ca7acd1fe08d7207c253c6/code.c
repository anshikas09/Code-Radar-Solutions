#include <stdio.h>
// Function to print Fibonacci series up to n
void fibonacciSeries(int n) {
    int a = 0, b = 1;
    // Print Fibonacci numbers while they are less than or equal to n
    printf("%d ", a);  // Always print the first Fibonacci number (0)
    // Only print b (the second Fibonacci number) if it's less than or equal to n
    if (b < n) {
        printf("%d ", b);
    }
    // Generate and print the rest of the Fibonacci numbers
    while (1) {
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
