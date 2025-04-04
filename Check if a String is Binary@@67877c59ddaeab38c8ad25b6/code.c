#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_binary_string(const char* str) {
    // Loop through the string and check if each character is '0' or '1'
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0; // Not a binary string
        }
    }
    return 1; // It's a binary string
}

int contains_multiple_spaces(const char* str) {
    int space_count = 0;

    // Check for multiple spaces
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            space_count++;
        }
    }

    return space_count > 1; // Return true if there are multiple spaces
}

int contains_single_space(const char* str) {
    int space_count = 0;

    // Check for single space
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            space_count++;
        }
    }

    return space_count == 1; // Return true if there's exactly one space
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    // Remove newline character at the end of input string
    str[strcspn(str, "\n")] = '\0';

    // Check if the string is binary or contains multiple or single spaces
    if (is_binary_string(str) || contains_multiple_spaces(str) || contains_single_space(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
