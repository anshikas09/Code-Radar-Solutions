#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char target, replacement;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    scanf(" %c", &target);  // Space before %c to skip any leftover newline
    scanf(" %c", &replacement);
    // Replace all occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            str[i] = replacement;
        }
    }
    printf("%s\n", str);

    return 0;
}
