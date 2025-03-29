#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxEven = -1;
    int found=0;
    // Traverse and find the largest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if even
            if (!foundEven) {  // First even number found
                maxEven = arr[i];
                foundEven = 1;
            } else if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }
    
    if (!foundEven) {
        printf("-1\n");
    } else {
        printf("%d\n", maxEven);
    }
    return 0;
}
