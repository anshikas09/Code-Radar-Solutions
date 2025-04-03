#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];  // Assuming max input length is 1000 characters
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = 0;
    
    // Loop through the string and count only non-space characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {  
            length++;  // Count only non-space characters
        }
    }

    printf("%d\n", length);  // Print the count of non-space characters

    return 0;
}
