#include <stdio.h>
#include <string.h>
void compressString(char str[], char compressed[]) {
    int n = strlen(str);
    if (n < 2) {
        strcpy(compressed, str); // Just copy the original string
        return;}
    int compressedIndex = 0;  // To track the position in the compressed string
    int count = 1;  // To count the occurrences of each character
    for (int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) {
            count++;  // Increment count for the same character
        } else {
            // Add the current character and its count to the compressed string
            compressed[compressedIndex++] = str[i - 1];
            if (count > 1) {
                // Add the count as digits to the compressed string
                char countStr[10]; // Temporary buffer to hold the count as string
                printf(countStr, "%d", count);
                int j = 0;
                while (countStr[j] != '\0') {
                    compressed[compressedIndex++] = countStr[j];
                    j++;
                }
            }
            count = 1;  // Reset the count for the new character
        }
    }

    // Add the last character and its count
    compressed[compressedIndex++] = str[n - 1];
    if (count > 1) {
        // Add the count as digits to the compressed string
        char countStr[10]; // Temporary buffer to hold the count as string
        printf(countStr, "%d", count);
        int j = 0;
        while (countStr[j] != '\0') {
            compressed[compressedIndex++] = countStr[j];
            j++;
        }
    }

    // Null-terminate the compressed string
    compressed[compressedIndex] = '\0';

    // If the compressed string is not shorter than the original, return the original string
    if (compressedIndex >= n) {
        strcpy(compressed, str);  // Copy the original string if compressed is not shorter
    }
}
