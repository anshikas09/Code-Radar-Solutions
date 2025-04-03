#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];  // Assuming max input length is 1000 characters
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = 0;
    int non_space_found = 0;  // Flag to check if there's any non-space character

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            non_space_found = 1;  // Found at least one non-space character
        }
    }

    // If input contains only spaces, return 0
    if (!non_space_found) {
        printf("0\n");
        return 0;
    }

    // If input has words, count all characters including spaces
    length = strlen(str);
    printf("%d\n", length);

    return 0;
}
