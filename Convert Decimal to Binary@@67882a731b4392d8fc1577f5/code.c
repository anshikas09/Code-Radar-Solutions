#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int started =0;
    if(num==0){
        printf("0");
    }
    int flag=1, bit=0;
    while(num>0){
        bit=num%2;
        num/=2;
        if(bit==1||!flag){
            printf("%d",bit);
            flag=0;
        }
    }
    printf("\n");
    return 0;
}