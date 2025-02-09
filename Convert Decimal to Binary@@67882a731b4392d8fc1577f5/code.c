#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    int started =0;
    if(num==0){
        printf("0");
    }
    int result=0,count=0;
    while(num>0){
        result=result*10+(num%2);
        num=num/2;
        count++;
    }
    while(count>0){
        printf("%d",result%10);
        result=result10;
        count--;
    }
    printf("\n");
    return 0;
}