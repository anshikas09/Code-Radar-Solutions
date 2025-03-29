#include <stdio.h>
#include <limits.h> // For INT_MAX
int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min1 = INT_MAX, min2 = INT_MAX;
    // Traverse to find first and second smallest
    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }
    if (min2 == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", min2);
    }
    return 0;
}
