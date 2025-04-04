#include <stdio.h>
#include <string.h>
#include<ctype.h>
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main() {
    char str[1000];
    char replaceChar;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &replaceChar);  // space before %c to skip newline
    for (int i = 0; str[i] != '\0'; i++) {
        if (isVowel(str[i])) {
            str[i] = replaceChar;
        }
    }
    printf("%s", str);
    return 0;
}
