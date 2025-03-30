#include<stdio.h>
int findfirstpeak(int arr[],int n){
    if(n==1){
        return arr[0];}
    int allEqual =1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0]){
            allEqual=0;
            break;}}
    if(allEqual){
        return -1;}
    // if(arr[0]>arr[1]){
    //     return arr[0];}
    // for(int i=1;i<n-1;i++){
    //     if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
    //         return arr[i];}}
    if(arr[n-1]>=arr[n-2]){
        return arr[n-1];}
    return -1;}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){return -1;}
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    int result=findfirstpeak(arr,n);
    printf("%d",result);}