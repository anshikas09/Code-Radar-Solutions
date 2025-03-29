#include <stdio.h>

int isPalindrome(int arr[], int n) {
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
