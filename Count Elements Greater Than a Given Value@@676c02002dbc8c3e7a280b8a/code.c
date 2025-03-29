#include <stdio.h>
int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int count = 0;
    // Traverse and count elements greater than x
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }
    printf("%d\n", x, count);

    return 0;
}
