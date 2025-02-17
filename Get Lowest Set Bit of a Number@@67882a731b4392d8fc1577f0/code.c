#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("0");
        return 0;
    }
    printf("%d\n",__builtin_ctz(num));
    return 0;
}