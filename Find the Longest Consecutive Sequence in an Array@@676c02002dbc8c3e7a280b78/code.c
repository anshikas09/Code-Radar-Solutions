// #include <stdio.h>
// #include <stdlib.h>
// // Comparison function for qsort
// int compare(const void *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }
// int longestConsecutive(int arr[], int n) {
//     if (n == 0) return 0;
//     // Sort the array
//     qsort(arr, n, sizeof(int), compare);
//     int maxLen = 1, currentLen = 1;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] == arr[i-1] + 1) {
//             currentLen++; // Increment length if consecutive
//         } else if (arr[i] != arr[i-1]) {
//             maxLen = (currentLen > maxLen) ? currentLen : maxLen;
//             currentLen = 1; // Reset for a new sequence
//         }
//     }
//     return (currentLen > maxLen) ? currentLen : maxLen;
// }

// int main() {
//     int n;
  
//     scanf("%d", &n);

//     int arr[n];
  
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int result = longestConsecutive(arr, n);
//     printf("%d\n", result);

//     return 0;
// }



#include <stdio.h>

// Selection Sort Function
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum with the first element
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Function to find the longest consecutive sequence
int longestConsecutive(int arr[], int n) {
    if (n == 0) return 0;

    selectionSort(arr, n);

    int maxLen = 1, currentLen = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currentLen++;
        } else if (arr[i] != arr[i - 1]) {
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
            currentLen = 1; // Reset for new sequence
        }
    }

    // if (currentLen > maxLen) {
    //     maxLen = currentLen;
    // }

    return maxLen;
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
