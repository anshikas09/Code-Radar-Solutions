#include <stdio.h>
int main() {
    int num,n;
    scnaf("%d %d",&num,&n);
    num=num ^ (1<<n);
    printf("%d\n",num);
    return 0;
}