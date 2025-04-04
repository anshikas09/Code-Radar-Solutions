#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            // Replace letters with '*'
            putchar('*');
        } else {
            // Keep non-letters like space, punctuation
            putchar(str[i]);
        }
    }
    return 0;
}
