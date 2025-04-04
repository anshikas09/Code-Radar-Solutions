#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Function to reverse characters between two indexes
void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    int i = 0, start = 0;
    int len = strlen(str);
    while (i <= len) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);  // Reverse current word
            start = i + 1;               // Move to next word
        }
        i++;
    }
    printf("%s\n", str);
    return 0;
}
