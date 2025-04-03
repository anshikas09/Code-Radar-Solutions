#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume the newline left by scanf

    char st[n + 1];
    fgets(st, sizeof(st), stdin); // Read full line including spaces

    // Remove the trailing newline character if present
    st[strcspn(st, "\n")] = '\0';

    int count = 0;
    int in_word = 0; // Flag to track if we are inside a word

    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] == ' ') {
            in_word = 0; // We are outside a word
        } else if (in_word == 0) {
            count++; // A new word starts
            in_word = 1;
        }
    }

    printf("%d\n", count); // Print the word count
    return 0;
}
