#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int found = 0;

    // Find duplicate using nested loops
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    
    if (!found) {
        printf("No Duplicates Found\n");
    }
    
    return 0;
}
