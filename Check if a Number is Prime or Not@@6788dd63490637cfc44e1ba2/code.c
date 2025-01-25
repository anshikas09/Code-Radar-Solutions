#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num>1){
        if(num%1==0 && num%10==0){
            printf("Prime");}else{
                printf("Not Prime");}
    else{
        printf("Not Prime");}
    }
    return 0;
}