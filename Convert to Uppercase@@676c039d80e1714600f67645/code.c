#include <stdio.h>
void toUppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        // Check if the character is lowercase (ASCII a-z)
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
        }
        i++;
    }}
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }}
    toUppercase(str);
    printf("%s\n", str);
    return 0;
}
