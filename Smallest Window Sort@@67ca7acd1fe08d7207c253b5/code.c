#include<limits.h>
int findUnsortedSubarray(int nums[],int n){
    int left=-1,right=-1;
    for(int i=0;i<n-1;i++){
        if(nums[i]>nums[i+1]){
            left=i;
            break;
        }
    }
    if(left==-1){
        return 0;
    }
    for(int i=n-1;i>=0;i--){
        if(nums[i]<nums[i-1]){
            right=i;
            break;
        }
    }
    // int subarray_min= INT_MAX;
    // int subarray_max= INT_MIN;
    // for(int i=left;i<=right;i++){
    //     if(nums[i]<subarray_min){
    //         subarray_min=nums[i];
    //     }
    //     if(nums[i]>subarray_max){
    //         subarray_max=nums[i];
    //     }
    // }
    // while(left>0 && nums[left-1]>subarray_min){left--;}
    // while(right<n-1 && nums[right+1]<subarray_max){right++;}
    // return right-left+1;

    for(int i=left;i<=right;i++){
        int count++ ;
    }
    return count;
}