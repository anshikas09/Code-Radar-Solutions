#include<stdio.h>
int main(){
    int num,position=-;
    scanf("%d",&num);
    if(num==0){
        printf("0");
        return 0;
    }
    for(int i=0;num>0;i++){
        if(num&1){
            position=i;
            break;
        }
        num>>=1;
    }

    printf("1");
    return 0;
}