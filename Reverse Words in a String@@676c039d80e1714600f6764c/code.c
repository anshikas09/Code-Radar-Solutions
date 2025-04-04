#include <stdio.h>
#include <string.h>

// Helper function to reverse characters in a portion of a string
void reverse(char *str, int start, int end) {
    while (start < end) {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
}

// Function to reverse words in a string
void reverseWords(char *str) {
    int len = strlen(str);

    // Remove trailing newline if exists (from fgets)
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;  // Update length after removing newline
    }

    // Step 1: Reverse the entire string
    reverse(str, 0, len - 1);

    // Step 2: Reverse each word
    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    reverseWords(str);

    printf("%s\n", str);

    return 0;
}
