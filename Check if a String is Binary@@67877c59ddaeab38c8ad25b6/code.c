#include <stdio.h>
#include <string.h>

int isBinaryOrSpaces(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1' && str[i] != ' ') {
            return 0; // Invalid character found
        }else if(str[i]==' ') {
            return 1;
        }
    }
    return 1; // Only 0, 1, or space
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (isBinaryOrSpaces(str))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
