#include <stdio.h>

// Function to print Fibonacci series up to n
void fibonacciSeries(int n) {
    int a = 0, b = 1;

    // Print Fibonacci numbers up to n
    printf("%d ", a);  // Always print the first Fibonacci number (0)
    while (b <= n) {
        printf("%d ", b);  // Print the current Fibonacci number
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}
