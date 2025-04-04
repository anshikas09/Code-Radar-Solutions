#include <stdio.h>
void removeSpaces(char *str) {
    int i = 0, j = 0;
    // Traverse through the string
    while (str[i]) {
        // If current character is not a space, keep it
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    // Null terminate the modified string
    str[j] = '\0';
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    // Remove newline character from fgets input
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }}
    removeSpaces(str);
    printf("%s\n", str);
    return 0;
}
