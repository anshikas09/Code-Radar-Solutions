#include <stdio.h>
#include <string.h>
// Function to check if a substring is a palindrome
int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}
// Function to find the longest palindromic substring
void findLongestPalindrome(char *str) {
    int maxLength = 1;
    int start = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1 > maxLength)) {
                start = i;
                maxLength = j - i + 1;
            }}}
    for (int i = start; i < start + maxLength; i++) {
        putchar(str[i]);
    }}
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    findLongestPalindrome(str);
    return 0;
}
