#include <stdio.h>
#include <string.h>
int main() {
    char st[1000];  // Assuming max input length is 1000 characters
    fgets(st, sizeof(st), stdin); // Read full line including spaces
    // Remove trailing newline character if present
    st[strcspn(st, "\n")] = '\0';
    int count = 0;
    int in_word = 0; // Flag to track if we are inside a word
    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] == ' ') {
            in_word = 0; // We are outside a word
        } else if (in_word == 0) {
            count++; // New word detected
            in_word = 1;
        }}
    printf("%d\n", count); // Print word count
    return 0;
}

