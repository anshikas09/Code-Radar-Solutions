#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxRight = -1; // Initialize to -1 since no elements are on the right
    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i]; // Store current element
        arr[i] = maxRight; // Replace with max element on the right
        if (temp > maxRight) {
            maxRight = temp; // Update maxRight if current element is greater
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
