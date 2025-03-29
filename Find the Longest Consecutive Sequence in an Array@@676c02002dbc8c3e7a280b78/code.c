#include <stdio.h>
#include <stdlib.h>
// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;
    // Sort the array
    qsort(arr, n, sizeof(int), compare);
    int maxLen = 1, currentLen = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1] + 1) {
            currentLen++; // Increment length if consecutive
        } else if (arr[i] != arr[i-1]) {
            maxLen = (currentLen > maxLen) ? currentLen : maxLen;
            currentLen = 1; // Reset for a new sequence
        }
    }
    return (currentLen > maxLen) ? currentLen : maxLen;
}

int main() {
    int n;
  
    scanf("%d", &n);

    int arr[n];
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = longestConsecutive(arr, n);
    printf("%d\n", result);

    return 0;
}
