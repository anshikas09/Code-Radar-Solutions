#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int freq[26] = {0};  // To count frequency of each lowercase letter a-z

    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    // Count frequency of alphabet characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char lower = tolower(str[i]);  // Convert to lowercase for consistency
            freq[lower - 'a']++;
        }
    }

    // Find the most frequent character
    int max_freq = 0;
    char most_frequent = 'a';  // Default to 'a'

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent = 'a' + i;
        }
    }

    if (max_freq == 0) {
        printf("\n");
    } else {
        printf("%c\n",most_frequent);
    }

    return 0;
}
