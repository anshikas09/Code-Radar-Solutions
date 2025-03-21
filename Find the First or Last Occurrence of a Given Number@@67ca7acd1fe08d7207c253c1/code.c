#include<stdio.h>
int findOccurence(int arr[],int n,int target,char mode){
    int left=0,right=n-1;
    int result=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid==target]){
            result=mid;
            if(mode=='F'){
                right=mid-1;
            }else if(mode=='L'){
                left=mid+1;
            }
        }else if(arr[mid]>target){
            right=mid-1;
        }else{
            lef=mid+1;}}
    return result;}