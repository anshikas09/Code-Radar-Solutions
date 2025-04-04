#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isBinary(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; // Not binary
        }
    }
    return 1; // It's binary
}

int isOnlySpaces(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            return 0; // Found a non-space character
        }
    }
    return 1; // All characters are spaces
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    if (isOnlySpaces(str)) {
        printf("Yes\n"); // String contains only spaces
    }
    else if (isBinary(str)) {
        printf("Yes\n"); // String is binary (only 0 and 1)
    }
    else {
        printf("No\n");
    }

    return 0;
}
