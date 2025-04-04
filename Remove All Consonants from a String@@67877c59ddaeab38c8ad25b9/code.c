#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);  // Make it case-insensitive
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[1000], result[1000];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Keep vowels, spaces, digits, punctuation
        if (!isalpha(ch) || isVowel(ch)) {
            result[j++] = ch;
        }
    }

    result[j] = '\0'; // Null-terminate the result

    printf("%s\n", result);

    return 0;
}
