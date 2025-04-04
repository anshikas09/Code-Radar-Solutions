#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Check if all characters are spaces
    int all_spaces = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            all_spaces = 0;
            break;
        }
    }

    if (all_spaces) {
        printf("0\n");
        return 0;
    }

    // Count words
    int word_count = 0;
    int in_word = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            if (!in_word) {
                in_word = 1;
                word_count++;
            }
        } else {
            in_word = 0;
        }
    }

    // If no word or only spaces
    if (word_count == 0) {
        printf("0\n");
    } else {
        printf("%lu\n", strlen(str));
    }

    return 0;
}
