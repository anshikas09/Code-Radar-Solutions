#include <stdio.h>
int main() {
    int num,isprime=1;
    scanf("%d",&num);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime>1 && n>1){printf("Prime");}
    else{printf("Not Prime");}
    return 0;
}