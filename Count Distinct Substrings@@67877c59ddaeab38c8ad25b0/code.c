#include <stdio.h>
#include <string.h>
#define MAX_LEN 30     // Max input string length
#define MAX_SUBS 500   // Max distinct substrings
// Check if substring is already in the list
int isUnique(char subs[MAX_SUBS][MAX_LEN], int count, char *newSub) {
    for (int i = 0; i < count; i++) {
        if (strcmp(subs[i], newSub) == 0)
            return 0; // Not unique
    }
    return 1; // Unique
}
int countDistinctSubstrings(char *str) {
    int len = strlen(str);
    char subs[MAX_SUBS][MAX_LEN];
    int count = 0;
    for (int i = 0; i < len; i++) {
        char temp[MAX_LEN] = "";
        for (int j = i; j < len; j++) {
            strncat(temp, &str[j], 1); // Add one character
            if (isUnique(subs, count, temp)) {
                strcpy(subs[count], temp);
                count++;
            }}}
    return count;
    }
int main() {
    char str[MAX_LEN];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline
    int result = countDistinctSubstrings(str);
    printf("%d\n", result);
    return 0;
}
