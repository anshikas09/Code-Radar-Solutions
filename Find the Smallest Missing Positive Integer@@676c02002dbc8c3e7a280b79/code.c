#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the smallest missing positive integer using Binary Search
int findSmallestMissingPositive(int arr[], int n) {
    // Remove negative numbers and sort the positive ones
    int temp[n], size = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            temp[size++] = arr[i];
        }
    }
    
    if (size == 0) return 1; // If no positive numbers, return 1

    // Sort the array
    qsort(temp, size, sizeof(int), compare);

    // Perform binary search
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (temp[mid] == mid + 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low + 1; // The smallest missing positive integer
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findSmallestMissingPositive(arr, n);
    printf("%d\n", result);

    return 0;
}
