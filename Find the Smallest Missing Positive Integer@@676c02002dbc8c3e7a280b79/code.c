// #include <stdio.h>

// // Function to find the smallest missing positive integer
// int findSmallestMissingPositive(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         // Place arr[i] at its correct position if it is within bounds
//         while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
//             int temp = arr[arr[i] - 1];
//             arr[arr[i] - 1] = arr[i];
//             arr[i] = temp;
//         }
//     }

//     // Find the first missing positive number
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != i + 1) {
//             return i + 1;
//         }
//     }

//     return n + 1;
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int result = findSmallestMissingPositive(arr, n);
//     printf("%d\n", result);

//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>

// Function to find the smallest missing positive integer
int findSmallestMissingPositive(int arr[], int n) {
    bool present[n + 1]; // To store presence of numbers from 1 to n
    for (int i = 0; i <= n; i++) {
        present[i] = false; // Initialize to false
    }

    // Mark present numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }

    // Find the first missing positive number
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }

    return n + 1;
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

