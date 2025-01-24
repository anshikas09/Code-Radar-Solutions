#include <stdio.h>
int main() {
    long n;
    scanf("%l",&n);
    if(n&(1<<32)){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}