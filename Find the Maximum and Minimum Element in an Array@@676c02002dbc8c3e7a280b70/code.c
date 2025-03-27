#include<stdio.h>
void MaxandMin(int arr[],int n){
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            max=arr[i];
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