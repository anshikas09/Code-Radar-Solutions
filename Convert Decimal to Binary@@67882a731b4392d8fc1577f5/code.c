#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int started =0;
    if(num==0){
        printf("0");
    }
    while(num>0){
        printf("%d",num%2);
        num=num/2;
    }
    printf("\n");
    return 0;
}