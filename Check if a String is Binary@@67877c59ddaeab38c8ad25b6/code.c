#include <stdio.h>
#include <string.h>
// Check if string contains only spaces
int isOnlySpaces(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            return 0; // Found something other than space
        }
    }
    return 1; // All characters are spaces
}

// Check if string contains only 0s and 1s
int isBinary(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; // Found non-binary character
        }
    }
    return 1; // All binary
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline from fgets
    str[strcspn(str, "\n")] = '\0';

    // If empty string
    if (strlen(str) == 0) {
        printf("No\n");
    }
    else if (isOnlySpaces(str)) {
        printf("Yes\n"); // Only spaces
    }
    else if (isBinary(str)) {
        printf("Yes\n"); // Only 0s and 1s
    }
    else {
        printf("No\n"); // Everything else
    }

    return 0;
}
