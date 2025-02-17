#include <stdio.h>
int main() {
     int num;
    int n;
    scanf("%d",&num);
    scanf("%d",&n);
    num=num|(1<<n);
    printf("%d",num);
    printf("\n");
    return 0;
}