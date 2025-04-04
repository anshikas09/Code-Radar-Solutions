#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char target;
    int count = 0;
    // Input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    // Input character to count
    scanf(" %c", &target);  // Space before %c to skip leftover newline
    // Count occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    printf("%c\n",count);

    return 0;
}
