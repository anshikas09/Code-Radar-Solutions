#include <stdio.h>
int main() {
    int num,isprime=0;
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            printf("Not Prime");
        }
    }
    printf("Prime");
    return 0;
}