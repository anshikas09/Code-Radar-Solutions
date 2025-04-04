#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256  // Covers all ASCII characters
int main() {
    char str[1000];
    int freq[MAX_CHAR] = {0};    // Frequency of each ASCII character
    int printed[MAX_CHAR] = {0}; // To avoid printing duplicates
    fgets(str, sizeof(str), stdin);
    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';
    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    // Print characters in order of first appearance
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!printed[ch]) {
            if (ch == ' ')
                printf("'space' = %d\n", freq[ch]);
            else
                printf("'%c' = %d\n", ch, freq[ch]);
            printed[ch] = 1;
        }
    }
    return 0;
}
