#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=b;
    c=a;
    b=c;
    printf("%d %d\n",a,b);
    return 0;
}