#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char st[n + 1]; // +1 for null character
    scanf("%s", st); // Takes input
    int len = strlen(st);
    char result[len + 1]; // Array to store reversed string
    result[len] = '\0'; // Null terminator
    for (int i = 0; i < len; i++) {
        result[i] = st[len - 1 - i]; // Reverse copying
    }
    printf("%s\n", result);
    return 0;
}
