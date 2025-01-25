#include <stdio.h>
int main() {
    unsigned int num;
    int n;
    scanf("%u",&num);
    scanf("%d",&n);
    num=num|(1<<n);
    for (int i=31;i>=0;i--){
        int bit=(num>>i)&1;
        printf("%d",bit);
    }
    printf("\n");
    return 0;
}