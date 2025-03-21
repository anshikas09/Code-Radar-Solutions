#include<stdio.h>
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void printPrimesInRange(int a,int b){
    if(a>b){
        printf("");
        return;
    }
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }printf("\n");
}