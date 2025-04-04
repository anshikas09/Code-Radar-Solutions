#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if fgets reads it
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    printf("%d\n", length);

    return 0;
}
