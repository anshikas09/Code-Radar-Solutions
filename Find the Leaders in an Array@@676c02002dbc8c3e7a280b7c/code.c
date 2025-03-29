#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n - 1];
    printf("%d ", maxRight); // Rightmost element is always a leader
    
    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            printf("%d ", maxRight);
        }
    }

    return 0;
}
