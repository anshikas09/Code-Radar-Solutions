#include <stdio.h>
int main() {
    int num,isprime=1;
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime>1 && num>1){printf("Prime");}
    else if(num==2){printf("Prime");}
    else{printf("Not Prime");}
    return 0;
}