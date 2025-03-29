#include <stdio.h>
// Function to count elements greater than k
int countGreaterThanK(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }
    return count;
}
int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    // Call the function
    int result = countGreaterThanK(arr, n, k);
    // Display the result
    printf("%d\n", k, result);
    return 0;
}

