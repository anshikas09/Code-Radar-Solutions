#include<stdio.h>
int findOccurrence(int arr[],int n,int target,char mode){
    int left=0,right=n-1;
    int result=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            result=mid;
            if(mode=='F'){
                right=mid-1;
            }else if(mode=='L'){
                left=mid+1;
            }
        }else if(arr[mid]>target){
            right=mid-1;
        }else{
            left=mid+1;}}
            if(result!=-1){
                printf("-1");
            }
    }