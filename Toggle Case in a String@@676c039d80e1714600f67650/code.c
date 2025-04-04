#include <stdio.h>
#include <ctype.h>
void toggleCase(char *str) {
    int i = 0;
    while (str[i]) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    toggleCase(str);
    printf("%s\n", str);
    return 0;
}
