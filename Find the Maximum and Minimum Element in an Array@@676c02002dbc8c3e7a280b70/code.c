#include<stdio.h>
void MaxandMin(int arr[],int n){
    int max,min;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            max=arr[i+1];
        }
        if(arr[i]>arr[i+1]){
            min=arr[i];
        }
    }
    printf("%d ",min);
    printf("%d ",max);
}
int main(){
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    MaxandMin(arr,n);
    return 0;
}