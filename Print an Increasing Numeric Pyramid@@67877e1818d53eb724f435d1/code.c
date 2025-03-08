// Your code here...
#include <stdio.h>

int main() {
    int rows; 
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  // Print the current number 
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}