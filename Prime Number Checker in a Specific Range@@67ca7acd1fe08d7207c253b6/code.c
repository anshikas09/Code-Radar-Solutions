#include<stdio.h>
#include<stdbool.h>
bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
void printPrimesInRange(int a,int b){
    if(a>b){
        printf("No prime numbers"); 
    }
    int foundPrime=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            foundPrime=1;
        }
    }
    if(!foundPrime){printf("No prime numbers");}
}
