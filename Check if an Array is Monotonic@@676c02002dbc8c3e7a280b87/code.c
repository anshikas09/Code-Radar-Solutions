#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int isIncreasing = 1, isDecreasing = 1;
    // Check for monotonicity
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isIncreasing = 0;
        }
        if (arr[i] < arr[i + 1]) {
            isDecreasing = 0;
        }
    }
    if (isIncreasing || isDecreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
