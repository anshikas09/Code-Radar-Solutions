#include <stdio.h>
#include <string.h>
int main() {
    char str[200], substr[100];
    fgets(str, sizeof(str), stdin);
    fgets(substr, sizeof(substr), stdin);
    // Remove newline characters from both inputs
    size_t len1 = strlen(str);
    if (len1 > 0 && str[len1 - 1] == '\n')
        str[len1 - 1] = '\0';
    size_t len2 = strlen(substr);
    if (len2 > 0 && substr[len2 - 1] == '\n')
        substr[len2 - 1] = '\0';
    // Use strstr to check for substring
    if (strstr(str, substr) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
