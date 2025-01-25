#include <stdio.h>
int main() {
    int num,positon=0;
    scanf("%d",&num);
    if(num==0){
        printf("0");
        return 0;
    }
    else{
        while((num&1)==0){
            num>>=1;
            positon++; 
        }
        printf("1");
    }
    return 0;
}