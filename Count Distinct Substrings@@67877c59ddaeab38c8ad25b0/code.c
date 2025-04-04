#include <stdio.h>
#include <string.h>
#define MAX 1000
// Function to check if a substring is already present
int isUnique(char substrings[][MAX], int count, char *newSub) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrings[i], newSub) == 0)
            return 0;  // Not unique
    }
    return 1;  // Unique
}
// Function to count all distinct substrings
int countDistinctSubstrings(char *str) {
    int len = strlen(str);
    char substrings[MAX * MAX][MAX]; // Assuming a maximum number of substrings
    int count = 0;
    for (int i = 0; i < len; i++) {
        char temp[MAX] = "";
        for (int j = i; j < len; j++) {
            strncat(temp, &str[j], 1);  // Append one character
            if (isUnique(substrings, count, temp)) {
                strcpy(substrings[count], temp);
                count++;
            }}}
    return count;
}
int main() {
    char str[MAX];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    int result = countDistinctSubstrings(str);
    printf("%d\n", result);
    return 0;
}
