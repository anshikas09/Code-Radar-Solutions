#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers <= 1 are not prime
    }
    if (num <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Divisible by 2 or 3
    }
    // Check divisibility using 6k ± 1 rule
    for (int i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    printf("%d\n", primeCount);
    return 0;
}
