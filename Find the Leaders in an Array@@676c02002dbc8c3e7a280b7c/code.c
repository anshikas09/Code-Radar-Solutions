#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], leaders[n], leaderCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n - 1];
    leaders[leaderCount++] = maxRight; // Rightmost element is always a leader

    // Traverse the array from right to left to find leaders
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders[leaderCount++] = maxRight;
        }
    }

    // Print leaders in the correct order (left to right)
    for (int i = leaderCount - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
