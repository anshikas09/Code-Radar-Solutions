#include <stdio.h>

int main() {
    char str[1000]; // Assuming max input length is 1000 characters
    fgets(str, sizeof(str), stdin); // Read full line including spaces

    int length = 0;

    // Count characters until we reach the null terminator '\0' or newline '\n'
    while (str[length] != '\0' && str[length] != '\n') {  
        length++;
    }

    printf("%d\n", length); // Print total length including spaces
    return 0;
}
