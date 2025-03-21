#include <stdio.h>
// Function to print Fibonacci series up to n
void fibonacciSeries(int n) {
    int a = 0, b = 1,c=0;
    for(int i=1;i<=n;i++){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
