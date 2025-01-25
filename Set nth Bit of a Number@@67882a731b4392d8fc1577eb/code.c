#include <stdio.h>
int main() {
    unsigned int num;
    int n;
    scanf("%u",&num);
    scanf("%d",&n);
    num=num|(1<<n);
    printf("%u",num);
    printf("\n");
    return 0;
}