#include <stdio.h>
// Function to print Fibonacci series up to n
void fibonacciSeries(int n) {
    int a = 0, b = 1;

    // Print Fibonacci numbers up to n
    while (a <= n) {
        printf("%d ", a);
        // Generate the next Fibonacci number
        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}
