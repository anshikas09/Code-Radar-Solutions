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

    // Find unique pairs without sorting or duplicates
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Check if the pair is already printed
                int isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[j] == arr[k]) || (arr[k] == arr[j] && arr[i] == arr[k])) {
                        isDuplicate = 1;
                        break;
                    }
                }
                
                if (!isDuplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                    count++;
                }
            }
        }
    }
    
    if (count == 0) {
        printf("\n");
    }
    
    return 0;
}
