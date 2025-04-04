#include <stdio.h>
#include <string.h>
#define CHAR_RANGE 256  // Total number of possible characters
char firstNonRepeatedChar(const char *str) {
    int freq[CHAR_RANGE] = {0};
    int i;
    // Count frequency of each character
    for (i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
    }
    // Find the first character with frequency 1
    for (i = 0; str[i]; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }}
    return '\0';  // No non-repeated character found
}
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
    char result = firstNonRepeatedChar(str);
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("\n");
    }
    return 0;
}
