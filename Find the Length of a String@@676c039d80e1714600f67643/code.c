#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Check if the string contains any non-space character
    int has_non_space = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            has_non_space = 1;
            break;
        }
    }

    if (!has_non_space) {
        printf("0\n");  // Only spaces
    } else {
        printf("%lu\n", strlen(str));  // Includes letters and spaces
    }

    return 0;
}
