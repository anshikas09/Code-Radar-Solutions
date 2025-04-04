#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];  // Buffer to hold input
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    // Check if all characters are spaces
    int has_non_space = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace((unsigned char)str[i])) {
            has_non_space = 1;
            break;
        }
    }

    if (!has_non_space) {
        // Input has only spaces
        printf("0\n");
    } else {
        // Input has at least one non-space character
        printf("%lu\n", strlen(str));
    }

    return 0;
}
