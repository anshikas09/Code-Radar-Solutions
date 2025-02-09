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
        int bit=num%2;
        if(bit==1){
            flag=1;
        }
        if(flag){
            printf("%d",bit);
        }
        num=num/2;
    }
    printf("\n");
    return 0;
}