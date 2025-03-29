#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxEven = -1;
    // Traverse and find the largest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }
    
    if (maxEven == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", maxEven);
    }
    
    return 0;
}
