#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char *str) {
    char cleaned[1000];
    int i, j = 0;
    // Remove spaces and optionally convert to lowercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            cleaned[j++] = tolower(str[i]);  // Use tolower to ignore case
        }
    }
    cleaned[j] = '\0';
    // Check if cleaned string is a palindrome
    int start = 0, end = j - 1;
    while (start < end) {
        if (cleaned[start] != cleaned[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    if (isPalindrome(str))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
