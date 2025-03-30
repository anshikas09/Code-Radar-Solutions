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

    // Find unique pairs without duplicates
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                count++;
                // Break after printing one pair with the same number
                while ( arr[j] == arr[j + 1]) {
                    j++;
                }
            }
        }
        // Skip further checks if the next number is the same
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
        }
    }
    
    if (count == 0) {
        printf("\n");
    }
    
    return 0;
}
