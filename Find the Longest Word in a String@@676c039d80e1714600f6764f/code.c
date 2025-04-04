#include <stdio.h>
#include <string.h>
#include <ctype.h>
void findLongestWord(char *str) {
    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;
    int i = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            // Starting a new word
            if (currLen == 0)
                currStart = i;
            currLen++;
        } else {
            // End of a word
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
        if (str[i] == '\0')
            break;

        i++;
    }
    for (int j = maxStart; j < maxStart + maxLen; j++) {
        putchar(str[j]);
    }
}
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    // Remove newline character added by fgets
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
    findLongestWord(str);
    return 0;
}
