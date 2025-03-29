#include <stdio.h>
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int count = 0;
    // Find all unique pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                count++;
            }
        }
    }

    if (count == 0) {
        printf(" ");
    }
    
    return 0;
}
