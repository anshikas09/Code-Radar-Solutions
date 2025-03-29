#include <stdio.h>
#include <limits.h> // For INT_MIN
int findMaxProduct(int arr[], int n) {
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return -1;
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    // Find the two largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    return max1 * max2;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = findMaxProduct(arr, n);
    if (result != -1) {
        printf("%d\n", result);
    }

    return 0;
}
