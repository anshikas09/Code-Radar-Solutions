#include <stdio.h>

int main() {
    char str[1000];  // Assuming max input length is 1000 characters
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = 0;

    // Count characters until we reach the null terminator '\0'
    while (str[length] != '\0') {  
        length++;
    }

    printf("%d\n", length);  // Print string length
    return 0;
}
