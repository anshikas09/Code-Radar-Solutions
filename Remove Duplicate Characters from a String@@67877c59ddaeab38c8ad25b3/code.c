#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
int main() {
    char str[MAX_LEN];
    int seen[256] = {0};  // ASCII character tracker
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            str[j++] = ch;
            seen[ch] = 1;
        }
    }
    str[j] = '\0';  // Null-terminate the result
    printf("%s\n", str);
    return 0;
}
