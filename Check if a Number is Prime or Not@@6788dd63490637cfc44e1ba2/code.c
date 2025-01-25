#include <stdio.h>
int main() {
    int num,isprime=0;
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isprime++;
            break;
        }
    }
    if(isprime==0 && num>1){printf("Prime");}
    else{printf("Not Prime");}
    return 0;
}