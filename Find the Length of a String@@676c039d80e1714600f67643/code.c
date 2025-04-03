#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];  // Assuming max input length is 1000 characters
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Remove trailing newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = 0;
    int non_space_found = 0;  // Flag to check if input contains any non-space character

    // Count characters while checking if there's at least one non-space character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            non_space_found = 1;  // Found a non-space character
        }
        length++;
    }

    // If input contains only spaces, print 0; otherwise, print the length
    if (non_space_found == 0) {
        printf("0\n");
    } else {
        printf("%d\n", length);
    }

    return 0;
}
