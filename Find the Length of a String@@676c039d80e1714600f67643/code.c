#include <stdio.h>

int main() {
    char str[1000]; // Assuming max input length is 1000 characters
    scanf("%s", str); // Read input (single word, no spaces)

    int length = 0;

    // Count characters until we reach the null terminator '\0'
    while (str[length] != '\0') {  
        length++;
    }

    printf("%d\n", length); // Print string length
    return 0;
}
