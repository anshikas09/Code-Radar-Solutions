#include <stdio.h>
#include <string.h>

char firstNonRepeatedChar(const char *str) {
    int freq[256] = {0};

    // Count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find the first non-repeated character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // No non-repeated character found
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    // Trim newline character
    str[strcspn(str, "\n")] = '\0';

    char result = firstNonRepeatedChar(str);

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("-\n");
    }

    return 0;
}
