#include <stdio.h>
#include <string.h>
int isBinary(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i]!=' ') {
            return 0; // Not binary
        }}
    return 1; // It's binary
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    if (isBinary(str))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
