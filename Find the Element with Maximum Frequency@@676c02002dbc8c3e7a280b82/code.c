#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 0, maxElement = arr[0];

    // Check frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("%d\n", maxElement);
    return 0;
}
