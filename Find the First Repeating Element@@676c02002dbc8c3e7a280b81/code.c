#include <stdio.h>

int findFirstRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i]; // Return the first repeating element
            }
        }
    }
    return -1; // Return -1 if no repeating element is found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findFirstRepeating(arr, n);
    printf("%d", result);

    return 0;
}
