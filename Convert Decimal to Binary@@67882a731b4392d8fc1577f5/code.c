#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int started =0;
    if(num==0){
        printf("0");
    }
    int flag=0;
    while(num>0){
        printf("%d",num%2);
        num/=2;
        if(int bit==1||flag){
            printf("%d",bit);
            flag=1;
        }
    }
    printf("\n");
    return 0;
}