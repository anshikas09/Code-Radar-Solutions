#include <stdio.h>
#include <stdlib.h>
// Function to sort the array using Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }}}}
int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1\n"); // Return -1 for single element or empty array
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Sort the array
    bubbleSort(arr, n);
    int minDiff = abs(arr[1] - arr[0]);
    int num1 = arr[0], num2 = arr[1];
    // Find the minimum difference by checking adjacent elements
    for (int i = 1; i < n-1; i++) {
        int diff = abs(arr[i+1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i+1];}}
    printf("%d %d\n", num1, num2);
    return 0;
}
