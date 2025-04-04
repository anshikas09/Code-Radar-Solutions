#include <stdio.h>
#include <string.h>
// Function to check if str2 is a rotation of str1
int areRotations(char *str1, char *str2) {
    // Check if lengths are the same
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    // Create a temporary string by concatenating str1 with itself
    char temp[400]; // Ensure enough space for concatenation
    strcpy(temp, str1);
    strcat(temp, str1);
    // Check if str2 is a substring of temp
    return strstr(temp, str2) != NULL;
}
int main() {
    char str1[200], str2[200];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (areRotations(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
