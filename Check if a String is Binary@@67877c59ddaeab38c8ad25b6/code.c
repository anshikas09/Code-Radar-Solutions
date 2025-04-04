#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isOnlySpaces(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            return 0; // Found non-space character
        }
    }
    return 1; // All spaces
}

int isBinary(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; // Not binary
        }
    }
    return 1; // All 0s and 1s
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    if (strlen(str) == 0) {
        printf("No\n"); // Empty string is not valid
    }
    else if (isOnlySpaces(str)) {
        printf("Yes\n");
    }
    else if (isBinary(str)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
