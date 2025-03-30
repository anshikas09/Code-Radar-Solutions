#include<stdio.h>
#include<limits.h>
void SecondLarge(int arr[], int n) {
    if (n <= 1) {
        printf("-1");
        return;
    }

    int max1 = INT_MIN, max2=INT_MIN; // Initialize max2 with a very small value
    int allSame = 1; // Flag to check if all elements are the same

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i-1]) {
            allSame = 0;
        }
        
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if (allSame || max2 == -100000) {
        printf("-1");
    } else {
        printf("%d", max2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    SecondLarge(arr, n);
    return 0;
}
