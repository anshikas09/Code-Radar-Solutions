#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxFreq = 0;
    int maxElement = arr[0];
    // Find frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }}
        // Update max frequency
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    printf("%d\n", maxElement);
    return 0;
}
