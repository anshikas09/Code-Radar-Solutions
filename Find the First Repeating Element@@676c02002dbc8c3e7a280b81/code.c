#include <stdio.h>
#include <limits.h>
int findFirstRepeating(int arr[], int n) {
    int freq[100000] = {0}; // Assuming elements are within a fixed range
    int index[100000];
    for (int i = 0; i < 100000; i++) {
        index[i] = -1; // Initialize index to -1
    }
    // Traverse the array to track frequencies and first occurrences
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        freq[num]++;
        if (index[num] == -1) {
            index[num] = i;
        }
    }
    int minIndex = INT_MAX;
    // Find the first repeating element
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 1 && index[arr[i]] < minIndex) {
            minIndex = index[arr[i]];
        }
    }
    return (minIndex == INT_MAX) ? -1 : arr[minIndex];
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findFirstRepeating(arr, n);
    if (result == -1) {
        printf("-1");
    } else {
        printf("%d\n", result);
    }
    return 0;
}
