#include<stdio.h>
int main(){
    int n1,n2,n3,sum=0;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        sum+=n1;
        if(n2>n3){
            sum+=n2;
        }
        else{
            sum+=n3;
        }
    }else if(n2>n1 && n2>n3){
        sum+=n2;
        if(n2>n3){
            sum+=n2;
        }
        else{
            sum+=n3;
        }
    }else{
        sum+=n3;
        if(n1>n2){
            sum+=n1;
        }
        else{
            sum+=n2;
        }
    }