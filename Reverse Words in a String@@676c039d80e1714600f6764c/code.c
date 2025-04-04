#include <stdio.h>
#include <string.h>

void reverseWord(char* str, int start, int end) {
    // Reverse characters of a word between start and end index
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWordsInString(char* str) {
    int n = strlen(str);
    int start = 0;
    
    // Reverse each word in the string
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);  // Reverse the word
            start = i + 1;  // Update the start of the next word
        }
    }
    // Reverse the last word
    reverseWord(str, start, n - 1);
}

int main() {
    char str[100];
    
    // Input the string

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the trailing newline character
    
    reverseWordsInString(str);
    
    printf("%s\n", str);
    
    return 0;
}
