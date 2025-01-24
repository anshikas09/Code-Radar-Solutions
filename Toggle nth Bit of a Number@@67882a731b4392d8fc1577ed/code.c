#include <stdio.h>
int main() {
    int num,n;
    scnaf("%d %d",&num,&n);
    num= num ^ (1<<n);
    printf("%d",num);
    return 0;
}