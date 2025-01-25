#include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u",&num);
    int trailing_zeros=__builtin_ctz(num);
    printf("%d\n",trailing_zeros);
    return 0;
}