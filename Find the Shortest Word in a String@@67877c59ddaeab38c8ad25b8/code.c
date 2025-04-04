#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[1000], word[100], shortest[100];
    int i = 0, j = 0, minLen = 1000;
    fgets(str, sizeof(str), stdin);
    // Add a space at the end to catch the last word
    strcat(str, " ");
    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            word[j++] = str[i];
        } else if (j > 0) {
            word[j] = '\0';  // End current word
            if (strlen(word) < minLen) {
                minLen = strlen(word);
                strcpy(shortest, word);
            }
            j = 0;  // Reset for next word
        }i++;
    }
    if (minLen != 1000)
        printf("%s\n", shortest);
    else
        printf("\n");
    return 0;
}
