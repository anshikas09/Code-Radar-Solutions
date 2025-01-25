#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u",&num);
    int flip= ~num;
    printf("%d\n",&flip);
    return 0;
}