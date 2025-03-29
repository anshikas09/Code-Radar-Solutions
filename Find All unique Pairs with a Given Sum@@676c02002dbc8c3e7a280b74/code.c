#include <stdio.h>
// Function to sort the array using Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {// Swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }}}}
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    // Sort the array to easily identify duplicates
    bubbleSort(arr, n);
    int count = 0;
    // Find unique pairs
    for (int i = 0; i < n - 1; i++) {// Skip duplicates
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                count++;
                break; // Move to the next distinct number to avoid duplicates
            }
        }
    }
    if (count == 0) {
        printf(" ");
    }
    
    return 0;
}
