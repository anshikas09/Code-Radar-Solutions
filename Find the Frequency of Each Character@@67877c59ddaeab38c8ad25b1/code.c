#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[26] = {0};   // To store frequency of a–z
    int printed[26] = {0}; // To track if already printed
    fgets(str, sizeof(str), stdin);
    // Count frequency
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }}
    // Print in order of first appearance
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (!printed[index]) {
                printf("%c: %d\n", ch, freq[index]);
                printed[index] = 1;
            }}}
    return 0;
}
