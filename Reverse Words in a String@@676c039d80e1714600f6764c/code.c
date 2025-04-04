#include <stdio.h>
#include <string.h>
void reverseWords(char str[]) {
    int start = 0, end = 0, length = strlen(str);
    // Reverse the entire string first
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    // Now reverse each word in the string
    while (str[end] != '\0') {
        if (str[end] == ' ' || str[end] == '\0') {
            int wordEnd = end - 1;
            while (start < wordEnd) {
                char temp = str[start];
                str[start] = str[wordEnd];
                str[wordEnd] = temp;
                start++;
                wordEnd--;
            }
            start = end + 1;
        }
        end++;
    }
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);  // Read the string
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline if present
    reverseWords(str);
    printf("%s\n", str);
    
    return 0;
}

