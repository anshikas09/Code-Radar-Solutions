#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume newline left by scanf
    char st[n + 1];
    fgets(st, sizeof(st), stdin); // Use fgets to read a full line including spaces

    int count = 0;
    int in_word = 0; // Flag to track if we are inside a word

    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] == ' ' || st[i] == '\n') {
            in_word = 0; // End of a word
        } else if (in_word == 0) {
            count++; // New word starts
            in_word = 1;
        }
    }

    printf("%d\n", count); // Print word count
    return 0;
}
