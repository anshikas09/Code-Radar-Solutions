#include<stdio.h>
int countGreater(int arr[], int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    printf("%d\n",countGreater(arr, n, x));
    return 0;
}
