#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
int main() {
    char str[MAX_LEN];
    int freq[256] = {0};  // Frequency array for all ASCII characters
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline
    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    // Find and print the first unique character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }}
    printf("-\n");
    return 0;
}
