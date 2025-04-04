#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];  // Make sure str1 is large enough to hold the result

   
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline

   
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline

    // Concatenate str2 to str1
    strcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}
