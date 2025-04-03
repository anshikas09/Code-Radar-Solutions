#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume newline left by scanf

    char st[n + 1];
    fgets(st, sizeof(st), stdin); // Read full line including spaces

    int count = 0;
    int in_word = 0; // Track if we are inside a word

    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] == ' ' || st[i] == '\n') {
            in_word = 0; // Word ends
        } else if (in_word == 0) {
            count++; // New word starts
            in_word = 1;
        }
    }

    printf("%d\n", count); // Print the word count
    return 0;
}
