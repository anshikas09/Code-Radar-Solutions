#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int started =0;
    if(num==0){
        printf("0");
    }
    else{
        for(int i=31;i>=0;i--){
            int bit=(num>>i)&1;
            if(bit==1||started){
                printf("%d",bit);
                started=1;
            }
        }
    }
    printf("\n");
    return 0;
}