#include<stdio.h>
int kthSmallest(int arr[],int n,int k){
    if(k<=0||k>n){
        return -1;
    }
    for(int i=0;i<k;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
    return arr[k-1];
}