#include <stdio.h>
// Function to sort array using Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }}}}
// Function to find the median
double findMedian(int arr[], int n) {
    bubbleSort(arr, n);
    if (n % 2 == 1) {
        return arr[n / 2]; // Odd case
    } else {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0; // Even case
    }}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    double median = findMedian(arr, n);
    printf("Median: %.2lf\n", median);

    return 0;
}
