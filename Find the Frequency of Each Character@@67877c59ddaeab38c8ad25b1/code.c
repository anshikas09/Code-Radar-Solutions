#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[26] = {0};  // For 'a' to 'z'
    fgets(str, sizeof(str), stdin);
    // Count frequency of each lowercase letter
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }
    // Print frequencies
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", 'a' + i, freq[i]);
        }
    }
    return 0;
}
