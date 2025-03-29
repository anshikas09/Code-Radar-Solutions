#include <stdio.h>
#include <stdlib.h> // For abs()

// Function to calculate the sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    num = abs(num); // Handle negative numbers
    while (num > 0) {
        sum += num % 10; // Extract last digit
        num /= 10;       // Remove last digit
    }
    return sum;
}

// Function to calculate and print the sum of digits
void calculateSumOfDigits(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n",sumOfDigits(arr[i]));
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    calculateSumOfDigits(arr, n);

    return 0;
}
