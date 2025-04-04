#include <stdio.h>
#include <string.h>
#include <ctype.h>

int areAnagrams(char str1[], char str2[]) {
    int freq1[26] = {0};
    int freq2[26] = {0};

    // Count frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            freq1[tolower(str1[i]) - 'a']++;
        }
    }

    // Count frequency of each character in str2
    for (int i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            freq2[tolower(str2[i]) - 'a']++;
        }
    }

    // Compare frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return 0;  // Not anagrams
        }
    }

    return 1;  // Anagrams
}

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
