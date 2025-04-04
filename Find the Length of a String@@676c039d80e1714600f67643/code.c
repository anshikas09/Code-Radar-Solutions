#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];  // Buffer to hold input
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    // Check if the input has at least one non-space character
    int non_space_found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            non_space_found = 1;
            break;
        }
    }

    if (!non_space_found) {
        // Only spaces in input
        printf("0\n");
    } else {
        // At least one non-space character
        printf("%lu\n", strlen(str));
    }

    return 0;
}
